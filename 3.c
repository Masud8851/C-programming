#include <stdio.h>

int main ()
{
    int a,b,x;
    scanf("%d %d", &a,&b);

    x=a*a+2*a*b+b*b;

    printf("a=%d \tb=%d",a,b);
    printf("\n%d",x);

    return 0;
}
