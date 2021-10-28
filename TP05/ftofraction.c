#include <math.h>
#include "fraction.h"

struct fraction_s *
ftofraction (double x ,double eps){
  struct fraction_s
    *haut=nouvelle_fraction(1,0),
    *bas=nouvelle_fraction(0,1),
    *milieu;
  double val_milieu;
  while(1){
    milieu=addition_cancre(bas,haut);
    val_milieu=eval_fraction(milieu);
    if(fabsl(val_milieu-x)<eps){
      break;
    }
    if (val_milieu<x){
      bas=milieu;
    }else{
      haut=milieu;
    }
  }
  return milieu;
}



double eval_fraction(struct fraction_s * f){
  return ((double)*numerateur(f))/(*denominateur(f));
}

struct fraction_s *
addition_cancre (struct fraction_s * f1, struct fraction_s * f2){
  return nouvelle_fraction(*numerateur(f1)+*numerateur(f2),*denominateur(f1)+*denominateur(f2));
}
