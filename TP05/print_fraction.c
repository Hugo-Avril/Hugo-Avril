#include "fraction.h"
#include <stdio.h>

void
print_fraction(struct fraction_s * f){
  printf("%d/ %d", *numerateur(f),*denominateur(f));
}
