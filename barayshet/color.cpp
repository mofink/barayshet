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
