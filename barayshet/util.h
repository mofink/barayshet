
#include "tuple.h"

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

   static float magnitude(const tuple& m);

   template <typename T>
   static bool isEq(T m, T n);
};

template <typename T>
bool util::isEq(T m, T n)
{
   float eps = 0.0001;
   return (abs(m - n) < eps);
}

