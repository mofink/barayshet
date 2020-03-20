#pragma once


//tuple class to represent points and vectors using floats
//general form is (x,y,z,w); x,y,z uses LH coordinate system; w == 0.0 is a vector; w == 1.0 is a point
// use derived classes to instantiate
class tuple
{
public:
   tuple(const float x, const float y, const float z, const float w);
   virtual ~tuple();

   float getX();
   void setX(const float a);
   float getY();
   void setY(const float a);
   float getZ();
   void setZ(const float a);
   float getW();
   void setW(const float a);
   
   virtual void print();

   


private:
   float x;
   float y;
   float z;
   float w;
};


