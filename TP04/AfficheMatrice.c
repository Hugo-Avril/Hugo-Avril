#include <stdio.h>

void AfficheMatrice ( float ** M , int n , int m ) {
    for (int i=0;i<n;i++){
        printf("( ");
        for (int j=0;j<m;j++){
            printf(" %5.2f " ,M[i][j] );
        }
        printf( " )\n" );
    }
}

#ifdef TESTS
#include "matrice.h"

int main() {
    float **M=CreerMatrice(2,2);
    M[0][0]=1;
    M[0][1]=2;
    M[1][0]=3;
    M[1][1]=4;
    AfficheMatrice ( M,2,2);
    return 0;
}
#endif 

