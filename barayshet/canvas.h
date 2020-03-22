#pragma once
#include "color.h"
#include <string>
#include <sstream>
#include <vector>

class canvas
{
public:
   canvas(int x, int y);
   virtual ~canvas();

   int getWidth();
   int getHeight();
   std::vector<std::string> getData();
   
   //get self
   canvas* getCanvas();

   //In C++11 we can move a stringstream
   std::stringstream createHeader();

   //write in column-row order
   void writePixel(int x, int y, color col);
   
   void canvasToPPM();

private:
   int width;
   int height;
   std::vector<std::string> myData;
};

