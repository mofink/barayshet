#include "vector.h"
#include <cmath>



vector::vector(const float x, const float y, const float z)
   : tuple(x, y, z, 0.0)
{
}


vector::~vector()
{
}


float vector::magnitude(const vector& m)
{
   return sqrt(pow(m.getX(), 2) + pow(m.getY(), 2) + pow(m.getZ(), 2));
}

vector& vector::normalize(vector& m)
{
   float tupleMag = magnitude(m);
   m.setX(m.getX() / tupleMag);
   m.setY(m.getY() / tupleMag);
   m.setZ(m.getZ() / tupleMag);

   return m;
}

float vector::dot(const vector& m, const vector& n)
{
   return m.getX()*n.getX() + m.getY()*n.getY() + m.getZ()*n.getZ();
}

vector vector::cross(const vector& m, const vector& n)
{

   return vector(
      m.getY()*n.getZ() - m.getZ()*n.getY()
      , m.getZ()*n.getX() - m.getX()*n.getZ()
      , m.getX()*n.getY() - m.getY()*n.getX());
}