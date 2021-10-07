#include<stdlib.h>



float **
CreerMatrice(int n,int m){
    float(**melenchon);
    melenchon=malloc(n*sizeof(float*));
    for (int i=0;i<n;i++){
        melenchon[i]=malloc(m*sizeof(float));
    }
    return (melenchon);
}

#ifdef TESTS

#include <stdio.h>
#include "matrice.h"

int
main(){
    float **M=CreerMatrice(2,2);
    M[0][0]=1;
    M[0][1]=2;
    M[1][0]=3;
    M[1][1]=4;
    AfficheMatrice(M,2,2);
    return 0;
}
#endif
