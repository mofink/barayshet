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


   std::stringstream createHeader(canvas* c);
   void writePixel(std::vector<std::string>& data, int x, int y, color col);
   
   void canvasToPPM();

private:
   int width;
   int height;
   std::vector<std::string> myData;
};

