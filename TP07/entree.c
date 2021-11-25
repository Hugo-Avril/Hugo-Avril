#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int lirefindeligne(){
    int count =0;
    char car;
    car = getchar(); //consomme un caractere de du buffer
    while ((car != EOF) && (car != '\n')){
        if (!isspace(car)){
            count ++; //pas un espace
        }
        car=getchar();
    }
    return count;
}

void lireentier (int * n){
    int lu;
    int nbr;
    int a;
    do{
        lu = scanf("%d", &a );
        nbr=lirefindeligne();  
    while ((lu!=1)&&(nbr>0));
    }
    return 0;
}
   
