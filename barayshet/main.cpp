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
   vector a1 = { 1, 2, 3};
   vector a2 = { 2, 3, 4 };
   util::cross(a2,a1).print();
   getchar();
   return 0;
}