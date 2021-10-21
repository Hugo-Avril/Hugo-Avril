#include "fraction.h"

struct fraction_s *
addition_cancre(struct fraction_s * f1, struct fraction_s * f2){
  return nouvelle_fraction(*numerateur(f1)+*numerateur(f2),*denominateur(f1)+*denominateur(f2));
}
