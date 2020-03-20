
#include "tuple.h"

class util
{

public:

   util();
   ~util();

   //replace these with a lambda
   static tuple add(tuple m, tuple n);
   static tuple subtract(tuple m, tuple n);

   template <typename T>
   static bool isEq(T m, T n);
};

template <typename T>
bool util::isEq(T m, T n)
{
   float eps = 0.0001;
   return (abs(m - n) < eps);
}

