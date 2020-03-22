#include <iostream>

#include "vector.h"
#include "point.h"
#include "util.h"
#include "color.h"
#include "canvas.h"


bool isEq(float a, float b)
{
   return abs(a - b) < 0.0001;
}

int main()
{
   canvas c(100, 100);
   c.canvasToPPM();
   color a1 = { 1.0f, 0.2f, 0.4f};
   color a2 = { 0.9f, 1.0f, 0.1f};
   color::blend(a1, a2).print();
   getchar();
   return 0;
}