#include<stdio.h>

int
main(int argc,char*argv[] __attribute__((unused))){
    int x0;
    int x1;
    int x2;
    printf("&x0=%p \n",&x0);
    printf("&x1=%p \n",&x1);
    printf("&x2=%p \n",&x2);
    printf("&x1-&x0=%ld\n",&x1-&x0);
    printf("&x2-&x1=%ld\n",&x2-&x1);
    printf("&x2-&x0=%ld\n",&x2-&x0);
    *(&x1+1)=2;
    printf("x0=%d \n",x0);
    *(&x0-2)=6;
    printf("%d", argc);
    return 0;
}
