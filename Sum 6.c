#include <stdio.h>

int main ()

{
    int num1;
    int num2;
    int sum;
    int abs;
    int mul;
    int div;

    printf("Enter Num1:");
    scanf("%d",&num1);
    printf("Enter Num2:");
    scanf("%d",&num2);

    sum=num1+num2;
    abs=num1-num2;
    mul=num1*num2;
    div=num1/num2;

    printf("Sum = %d\n",sum);
    printf("Abstract = %d\n",abs);
    printf("Multiple = %d\n",mul);
    printf("Div = %d\n",div);

    return 0;

}
