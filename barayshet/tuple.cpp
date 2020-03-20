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

float tuple::getX() const
{
   return x;
}

void tuple::setX(const float a)
{
   x = a;
}

float tuple::getY() const
{
   return y;
}

void tuple::setY(const float a)
{
   y = a;
}

float tuple::getZ() const
{
   return z;
}

void tuple::setZ(const float a)
{
   z = a;
}

float tuple::getW() const
{
   return w;
}

void tuple::setW(const float a)
{
   w = a;
}

void tuple::print() const
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
