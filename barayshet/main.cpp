#include <iostream>

#include "vector.h"
#include "point.h"
#include "util.h"


bool isEq(float a, float b)
{
   return abs(a - b) < 0.0001;
}

int main()
{
   point a1 = { 3, 2, 1 };
   point a2 = { 5, 6, 7 };
   a2.setX(1);
   a2.setY(1);
   util::negate(a2).print();
   getchar();
   return 0;
}