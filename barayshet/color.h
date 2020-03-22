#pragma once
#include "tuple.h"
class color : public tuple
{
public:

   color(float red, float green, float blue);
   virtual ~color();

   float getRed();
   void setRed(float col);
   float getGreen();
   void setGreen(float col);
   float getBlue();
   void setBlue(float col);

   static color blend(color c1, color c2);

   //clamp values between 0 and 255
   void clampColor();

private:
   float red;
   float green;
   float blue;
};

