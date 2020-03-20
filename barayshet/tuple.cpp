#include <iostream>
#include <string>

#include "tuple.h"

tuple::tuple(const float x, const float y, const float z, const float w)
   : x(x)
   , y(y)
   , z(z)
   , w(w)
{

}

tuple::~tuple()
{
}

float tuple::getX()
{
   return x;
}

void tuple::setX(const float a)
{
   x = a;
}

float tuple::getY()
{
   return y;
}

void tuple::setY(const float a)
{
   y = a;
}

float tuple::getZ()
{
   return z;
}

void tuple::setZ(const float a)
{
   z = a;
}

float tuple::getW()
{
   return w;
}

void tuple::setW(const float a)
{
   w = a;
}

void tuple::print()
{
   float w = getW();
   std::string str;
   if (w == 0)
   {
      str = "vector";
   }
   else if (w == 1)
   {
      str = "point";
   }
   else
   {
      str = "INVALID";
   }
   std::cout << str << ": " << getX() << " " << getY() << " " << getZ() << std::endl;
}
