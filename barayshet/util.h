
#include "tuple.h"
#include "vector.h"

//utility functions to operate on tuples
//this and the tuple class itself can be optimized
class util
{

public:

   util();
   ~util();

   template <typename T>
   static bool isEq(T m, T n);

};

template <typename T>
bool util::isEq(T m, T n)
{
   float eps = 0.0001;
   return (abs(m - n) < eps);
}

