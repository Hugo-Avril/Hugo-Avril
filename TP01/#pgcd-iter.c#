 #include<stdio.h>

int
pgcd (int a, int b) {
   int r = a % b;
   while (r!=0) {
     a=b;
     b=r;
     r=a%b;
   }
   return b ;
 }

int
main() {
  printf("% d\n", pgcd (21,51));
  return 0 ;
}
