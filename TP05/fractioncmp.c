#include "fraction.h"

int fractioncmp (struct fraction_s * f1, struct fraction_s * f2){
  int delta = *numerateur(f1)* *denominateur(f2)-*numerateur(f2)* *denominateur(f1);
  return (delta);
}

#ifdef TESTS
#include "tests.h"
int main(){
  struct fraction_s
    * f1 , *f2;
  f1=nouvelle_fraction(1,2);
  f2=nouvelle_fraction(2,3);
  TEST_RES(*denominateur(f1)==2);
  TEST_RES(fractioncmp(f1,f2)>0);
  TEST_RES(fractioncmp(f1,f2)==0);
  TEST_RES(fractioncmp(f2,f1)<0);
  return 0;
}
#endif

