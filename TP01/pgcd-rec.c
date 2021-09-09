#include<stdio.h>

int pgcd (int a , int b ) {
  if (a==b) {
    return a ;
  } else if (a>b) {
    return pgcd (a - b , b) ;
  } else { /* cas a<b */
    return pgcd (a, b - a) ;
  }
}

int
main() {
  printf("% d\n", pgcd (21,51));
  return 0 ;
}
