#include <stdio.h>

int main ()
{
    double a,b,sum;
    a=9.5;
    b=8.743;
    sum = a+b;
    printf("Sum is : %lf",sum);
    printf("\nSum is : %0.02lf",sum);
    printf("\nSum is : %0.03lf",sum);
    printf("\nSum is : %0.0lf",sum);
    printf("\nSum is : %0.12lf",sum);



    return 0;
}
