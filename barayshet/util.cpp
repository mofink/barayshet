#include "util.h"
#include <iostream>
#include <cmath>

util::util()
{
   std::cout << "Constructor" << std::endl;
}


util::~util()
{
}

tuple& util::add(tuple& m, tuple& n)
{
   m.setX(m.getX() + n.getX());
   m.setY(m.getY() + n.getY());
   m.setZ(m.getZ() + n.getZ());
   m.setW(m.getW() + n.getW());
   return m;
}

tuple& util::subtract(tuple& m, tuple& n)
{
   m.setX(m.getX() - n.getX());
   m.setY(m.getY() - n.getY());
   m.setZ(m.getZ() - n.getZ());
   m.setZ(m.getW() - n.getW());
   return m;
}

tuple& util::negate(tuple& m)
{
   m.setX(-m.getX());
   m.setY(-m.getY());
   m.setZ(-m.getZ());
   m.setW(-m.getW());
   return m;
}

tuple& util::scale(const float a, tuple& m)
{
   m.setX(a*m.getX());
   m.setY(a*m.getY());
   m.setZ(a*m.getZ());
   m.setW(a*m.getW());

   return m;
}

tuple& util::scale(tuple& m, const float a)
{
   m.setX(a*m.getX());
   m.setY(a*m.getY());
   m.setZ(a*m.getZ());
   m.setW(a*m.getW());

   return m;
}

float util::magnitude(const tuple& m)
{
   return sqrt(pow(m.getX(), 2) + pow(m.getY(), 2) + pow(m.getZ(), 2));
}

