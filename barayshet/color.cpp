#include "color.h"

color::color(float red, float green, float blue)
   : tuple(red, green, blue, -1.0)
   , red(red)
   , green(green)
   , blue(blue)
{
}


color::~color()
{
}

float color::getRed()
{
   return red;
}

void color::setRed(float col)
{
   red = col;
}

void color::setGreen(float col)
{
   green = col;
}

void color::setBlue(float col)
{
   blue = col;
}

float color::getGreen()
{
   return green;
}

float color::getBlue()
{
   return blue;
}

color color::blend(color c1, color c2)
{
   return color(c1.getRed()*c2.getRed(), c1.getGreen()*c2.getGreen(), c1.getBlue()*c2.getBlue());
}

void color::clampColor()
{
   if (getRed() > 255)
   {
      setRed(255);
   }
   else if (getRed() < 0)
   {
      setRed(0);
   }
   else
   {} //already clamped between 0 and 255   
   
   if (getGreen() > 255)
   {
      setGreen(255);
   }
   else if (getGreen() < 0)
   {
      setGreen(0);
   }
   else
   {} //already clamped between 0 and 255   
   
   
   if (getBlue() > 255)
   {
      setBlue(255);
   }
   else if (getBlue() < 0)
   {
      setBlue(0);
   }
   else
   {} //already clamped between 0 and 255  
}
