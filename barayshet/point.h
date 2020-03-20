#include "tuple.h"


class point : public tuple
{
public:
   point(const float x, const float y, const float z);
   virtual ~point();

private:
   point();
};

