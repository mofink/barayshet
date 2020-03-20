#include <iostream>
#include <string>

#include "tuple.h"

tuple::tuple(float x, float y, float z, float w)
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

float tuple::getY()
{
   return y;
}

float tuple::getZ()
{
   return z;
}

float tuple::getW()
{
   return w;
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
