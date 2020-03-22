#include <iostream>

#include "vector.h"
#include "point.h"
#include "util.h"
#include "color.h"
#include "canvas.h"


int main()
{
   canvas c(100, 100);
   color pixel = color(1, 1, 1);
   c.writePixel(2,3,pixel);
   c.canvasToPPM();
   return 0;
}