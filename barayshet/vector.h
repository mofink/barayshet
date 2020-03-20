#pragma once

#include "tuple.h"

class vector : public tuple

{
public:

   vector(const float x, const float y, const float z);
   
   virtual ~vector();
};

