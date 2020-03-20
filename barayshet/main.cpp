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
   point a1 = { 1, -2, 3};
   std::cout << util::magnitude(a1) << std::endl;
   getchar();
   return 0;
}