#include "fraction.h"

double
eval(struct fraction * f){
  return (*numerateur(f))/((double)(*denominateur(f)));
}

