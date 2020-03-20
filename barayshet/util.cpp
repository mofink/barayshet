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

float util::magnitude(const vector& m)
{
   return sqrt(pow(m.getX(), 2) + pow(m.getY(), 2) + pow(m.getZ(), 2));
}

vector& util::normalize(vector& m)
{
   float tupleMag = magnitude(m);
   m.setX(m.getX() / tupleMag);
   m.setY(m.getY() / tupleMag);
   m.setZ(m.getZ() / tupleMag);

   return m;
}

float util::dot(const vector& m, const vector& n)
{
   return m.getX()*n.getX() + m.getY()*n.getY() + m.getZ()*n.getZ();
}

vector util::cross(const vector& m, const vector& n)
{

   return vector(
            m.getY()*n.getZ() - m.getZ()*n.getY()
          , m.getZ()*n.getX() - m.getX()*n.getZ()
          , m.getX()*n.getY() - m.getY()*n.getX());
}

