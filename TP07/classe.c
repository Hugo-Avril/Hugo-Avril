
#include <stdio.h>

int main ()
{
    char c1;
    scanf("%c", &c1);
    if (('0'<= c1) && (c1<='9')){
        printf(" entier\n");
    } else if (('a'<= c1) && (c1<='z')){
        printf("minuscule\n");
    }else if (('A'<= c1) && (c1<='Z')){
        printf("%majuscule\n");
    }
    return 0;
}
