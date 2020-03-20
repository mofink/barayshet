
#include "tuple.h"
#include "vector.h"

//utility functions to operate on tuples
//this and the tuple class itself can be optimized
class util
{

public:

   util();
   ~util();

   //replace these with a lambda
   static tuple& add(tuple& m, tuple& n);
   static tuple& subtract(tuple& m, tuple& n);
   static tuple& negate(tuple& m);

   static tuple& scale(const float a, tuple& m);
   static tuple& scale(tuple& m, const float a);

   static float magnitude(const vector& m);
   static vector& normalize(vector& m);

   //dot product
   static float dot(const vector& m, const vector& n);
   
   //cross product, too lazy to optimize this now, return by value
   static vector cross(const vector& m, const vector& n);

   template <typename T>
   static bool isEq(T m, T n);
};

template <typename T>
bool util::isEq(T m, T n)
{
   float eps = 0.0001;
   return (abs(m - n) < eps);
}

