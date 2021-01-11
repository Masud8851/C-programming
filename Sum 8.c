#include <stdio.h>

int main ()

{
    double num1;
    double num2;
    double sum;
    double ab;
    double mul;
    double div;

    printf("Enter Num1:");
    scanf("%lf",&num1);
    printf("Enter Num2:");
    scanf("%lf",&num2);

    sum=num1+num2;
    ab=num1-num2;
    mul=num1*num2;
    div=num1/num2;

    printf("Sum = %.2lf\n",sum);

    printf("Abstract = %.2lf\n",ab);

    printf("Multiple = %.2lf\n",mul);

    printf("Div = %.2lf\n",div);

    return 0;

}
