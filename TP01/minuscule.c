#include<stdio.h>

int
minuscule (char x) {
    if ((x>='a') && (x<='z')) {
        return 1;
    }
    else {
        return 0;
    }
}

int
main() {
    printf("%d \n", minuscule('F'));
    printf("%d \n", minuscule('h'));
    printf("%d \n", minuscule(' '));
    printf("%d \n", minuscule('9'));
    printf("%d \n", minuscule('%'));
    return 0 ;
}
