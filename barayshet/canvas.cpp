#include "canvas.h"

#include <sstream>


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

void canvas::writePixel(canvas c, int x, int y, color col)
{

}

std::string canvas::canvasToPPM(canvas c)
{
   /*PPM File Format
   """
      P3  --PPM formate
      x y --width, height of canvas
      255 --max color 
      RGB RGB RGB... --RGB for each pixel
   """
   */

   std::stringstream ss;
   ss << "P3\n" + c.getWidth() << " " << c.getHeight() << "\n255";
   return ss.str();
}
