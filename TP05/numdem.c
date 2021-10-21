#include "fraction.h"


int *
numerateur (struct fraction_s * f){
  return &(f->p);
}

int *
denominateur (struct fraction_s * f){
  return &(f->q);
}
