#pragma once

#include "tuple.h"

class vector : public tuple

{
public:

   vector(const float x, const float y, const float z);
   
   virtual ~vector();


   static float magnitude(const vector& m);
   static vector& normalize(vector& m);

   //dot product
   static float dot(const vector& m, const vector& n);

   //cross product, too lazy to optimize this now, return by value
   static vector cross(const vector& m, const vector& n);
};

