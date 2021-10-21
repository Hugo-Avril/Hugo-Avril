#include <stdlib.h>
#include "fraction.h"

struct fraction_s *
nouvelle_fraction (int touyoutou, int toutouyoutou){
    struct fraction_s * t;
    t=malloc(sizeof(struct fraction_s));
    if (toutouyoutou<touyoutou){
        touyoutou=-touyoutou;
        toutouyoutou=-toutouyoutou;
    }
    (*t).p=touyoutou;
    t->q=toutouyoutou;
    return t;
}



#ifdef TESTS
#include "tests.h"

int main(){
    struct fraction_s * f;
    f=nouvelle_fraction(1,2);
    VAL_INT(numerateur(f));
    TEST_RES(denominateur(f)==2);
    return 0;
}
#endif


//struct fraction * f;
//f=nouvelle_fraction(2,3);
//VAL_INT(f->p);
//TEST_RES (f−>p == 2) ;
//VAL_INT (f−>q) ;
//TEST_RES (f−>q == 3) ;
//f = nouvelle_fraction (2 ,−3) ;
//TEST_RES(f−>p ==−2) ;
//TEST_RES(f−>q == 3) ;
//f = nouvelle_fraction (2,0) ;
//TEST_RES(f−>p == 1) ;
//TEST_RES(f−>q == 0) ;
//f = nouvelle_fraction (−3,0) ;
//TEST_RES(f−>p ==−1) ;
//TEST_RES(f−>q == 0) ;
//f = nouvelle_fraction (0,−4) ;
//TEST_RES(f−>p == 0) ;
//TEST_RES(f−>q == 1) ;
