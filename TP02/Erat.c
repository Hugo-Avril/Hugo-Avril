#include<stdio.h>

#define TAILLE 100000

int
crible( int * t ){
    t[0]=0;
    t[1]=0;
    for(int i=2;i<100000;i++){
        t[i]=1;
    }
    printf ( "%p\n" , t ) ;
    printf ( "%d\n" , t[0] ) ;
    printf ( "%d\n" , t[1] ) ;
    printf ( "%d\n" , t[15874] ) ;
    for (int u=0;u<100000;u++){
        if (t[u]==1){
            for(int j=2;u*j<100000;j++){
                t[u*j]=0;
            }
        }
    }
    printf ( "%d\n" , t[1] ) ;
    printf ( "%d\n" , t[2] ) ;
    printf ( "%d\n" , t[17] ) ;
    printf ( "%d\n" , t[22] ) ;
    return(0);
}

int
main(){
    int tableau[TAILLE];
    crible (& ( tableau[0] ));
    return(0);
}
