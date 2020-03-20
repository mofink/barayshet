#include "tuple.h"


class point : public tuple
{
public:
   point(float x, float y, float z);
   virtual ~point();

private:
   point();
};

