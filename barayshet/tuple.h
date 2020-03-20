#pragma once


//tuple class to represent points and vectors using floats
//general form is (x,y,z,w); x,y,z uses LH coordinate system; w == 0.0 is a vector; w == 1.0 is a point
// use derived classes to instantiate
class tuple
{
public:
   tuple(const float x, const float y, const float z, const float w);
   virtual ~tuple();

   float getX() const;
   void setX(const float a);
   float getY() const;
   void setY(const float a);
   float getZ() const;
   void setZ(const float a);
   float getW() const;
   void setW(const float a);
   
   virtual void print() const;

   


private:
   float x;
   float y;
   float z;
   float w;
};


