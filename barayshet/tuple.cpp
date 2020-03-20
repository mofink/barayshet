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


tuple tuple::add(tuple& m, tuple& n)
{
   return tuple(m.getX() + n.getX()
      , m.getY() + n.getY()
      , m.getZ() + n.getZ()
      , m.getW() + n.getW());
}

tuple tuple::subtract(tuple& m, tuple& n)
{
   return tuple(m.getX() - n.getX()
      , m.getY() - n.getY()
      , m.getZ() - n.getZ()
      , m.getW() - n.getW());
}

tuple tuple::negate(tuple& m)
{
   return tuple(-m.getX()
       , -m.getY()
       , -m.getZ()
       , -m.getW());
}

tuple tuple::scale(const float a, tuple& m)
{
   return tuple(a*m.getX()
              , a*m.getY()
              , a*m.getZ()
              , a*m.getW());
}

tuple tuple::scale(tuple& m, const float a)
{
   return tuple(a*m.getX()
      , a*m.getY()
      , a*m.getZ()
      , a*m.getW());
}

