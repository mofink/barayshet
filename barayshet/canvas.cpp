#include "canvas.h"
#include <fstream>


canvas::canvas(int x, int y)
   : width(x)
   , height(y)
{

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


std::stringstream canvas::createHeader(canvas c)
{
   std::stringstream ss;
   ss << "P3\n" << c.getWidth() << " " << c.getHeight() << "\n255\n";
   return ss;
}

void canvas::writePixel(std::stringstream& ss, int x, int y, color col)
{
   ss << col.getRed() << col.getGreen() << col.getBlue() << " ";
}

void canvas::canvasToPPM(canvas c)
{
   /*PPM File Format 
   """
      P3  --PPM formate
      x y --width, height of canvas
      255 --max color 
      RGB RGB RGB... --RGB for each pixel
   """
   */
   std::stringstream ss = createHeader(c);
   
   for (int i = 0; i < c.getHeight(); ++i)
   {
      for (int j = 0; j < c.getWidth(); ++j)
      {
         writePixel(ss, i, j, color(0, 0, 0));
      }
      ss << "\n";
   }
   
   std::ofstream myFile;
   myFile.open("output.ppm");
   myFile << ss.str();
   myFile.close();

}

