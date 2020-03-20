#pragma once
#include "color.h"
#include <string>

class canvas
{
public:
   canvas(int x, int y);
   virtual ~canvas();

   int getWidth();
   int getHeight();

   static void writePixel(canvas c, int x, int y, color col);
   static std::string canvasToPPM(canvas c);

private:
   int width;
   int height;
};

