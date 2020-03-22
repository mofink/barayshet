#pragma once
#include "color.h"
#include <string>
#include <sstream>

class canvas
{
public:
   canvas(int x, int y);
   virtual ~canvas();

   int getWidth();
   int getHeight();

   static std::stringstream createHeader(canvas c);
   static void writePixel(std::stringstream& ss, int x, int y, color col);
   
   static void canvasToPPM(canvas c);

private:
   int width;
   int height;
};

