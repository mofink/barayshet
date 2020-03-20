#pragma once


//tuple class to represent points and vectors using floats
//general form is (x,y,z,w); x,y,z uses LH coordinate system; w == 0.0 is a vector; w == 1.0 is a point
// use derived classes to instantiate
class tuple
{
public:
   tuple(float x, float y, float z, float w);
   virtual ~tuple();

   virtual float getX();
   virtual float getY();
   virtual float getZ();
   virtual float getW();

   virtual void print();


private:
   float x;
   float y;
   float z;
   float w;
};


