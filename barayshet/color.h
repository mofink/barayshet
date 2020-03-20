#pragma once
#include "tuple.h"
class color : public tuple
{
public:

   color(float red, float green, float blue);
   virtual ~color();

   float getRed();
   float getGreen();
   float getBlue();

   static color blend(color c1, color c2);

private:
   float red;
   float green;
   float blue;
};

