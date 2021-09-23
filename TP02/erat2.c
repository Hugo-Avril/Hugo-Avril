#include<stdio.h>

#define TAILLE 100000

int
crible2( int * t ){
    t[0]=0;
    t[1]=0;
    for(int i=2;i<100000;i++){
        t[i]=i;
    }
    for (int u=2;u<100000/2;u++){
        if (t[u]==u){
            for(int j=2;u*j<100000;j++){
                t[u*j]=u;
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
    crible2 (& ( tableau[0] ));
    return(0);
}
