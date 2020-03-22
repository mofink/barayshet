#include "canvas.h"
#include <fstream>


canvas::canvas(int x, int y)
   : width(x)
   , height(y)
{
   //initialize image data
   std::vector<std::string> data;
   for (int i = 0; i < getHeight(); ++i)
   {
      for (int j = 0; j < getWidth(); ++j)
      {
         data.push_back("0 0 0");
      }
      //data.push_back("\n");
   }
   myData = data;
}

canvas::~canvas()
{
}

int canvas::getWidth()
{
   return width;
}

int canvas::getHeight()
{
   return height;
}


std::vector<std::string> canvas::getData()
{
   return myData;
}

canvas* canvas::getCanvas()
{
   return this;
}

std::stringstream canvas::createHeader()
{
   std::stringstream ss;
   ss << "P3\n" << getWidth() << " " << getHeight() << "\n255\n";
   return ss;
}

void canvas::writePixel(int x, int y, color pixel)
{ 
   std::stringstream ss;
   pixel.clampColor();
   ss << pixel.getRed() << " " << pixel.getGreen() << " " << pixel.getBlue();
   //data is stored in width height order for PPM
   myData[y*getWidth() + x] = ss.str();
}

void canvas::canvasToPPM()
{
   /*PPM File Format 
   """
      P3  --PPM formate
      x y --width, height of canvas
      255 --max color 
      RGB RGB RGB... --RGB for each pixel
   """
   */
   
   //open new file to output to
   std::ofstream myFile;
   myFile.open("image.ppm");

   //add PPM file header
   std::stringstream ss = createHeader();
   myFile << ss.rdbuf();

   //add pixel data
   int i = 0;
   for (std::string e : myData)
   {
      ++i;
      myFile << e << " ";
      if (i == getWidth())
      {
         myFile << "\n";
         i = 0;
      }
   }

   //all done
   myFile.close();

}

