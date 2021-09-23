#include<stdio.h>

int
suite(int(n)){
    if (n==0){
        return (1);
    }
    else{
        return(3*suite(n-1)-1);
    }
}


int (res)= suite(10);
int viter (int n){
    int u_courant,u_precedent;
    u_courant=1;
    for(int i=0;i<n;i++){
        u_precedent=u_courant;
        u_courant=3*u_precedent-1;
    }
    return u_courant;
}

int (res2) = u_courant(10);
