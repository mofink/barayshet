#include "util.h"

util::util()
{
}


util::~util()
{
}

tuple util::add(tuple m, tuple n)
{
   return tuple(m.getX() + n.getX(), m.getY() + n.getY(), m.getZ() + n.getZ(), m.getW() + n.getW());
}

tuple util::subtract(tuple m, tuple n)
{
   return tuple(m.getX() - n.getX(), m.getY() - n.getY(), m.getZ() - n.getZ(), m.getW() - n.getW());
}

tuple util::negate(tuple m)
{
   return tuple(-m.getX(), -m.getY(), -m.getZ(), -m.getW());
}

