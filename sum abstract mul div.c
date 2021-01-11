#include <stdio.h>

int main ()

{
    int num1,num2;
    printf("Enter Num1:");
    scanf("%d",&num1);

    printf("Enter Num2:");
    scanf("%d",num2);

    printf("%d + %d = %d",num1,num2,num1+num2);
    printf("%d + %d = %d",num1,num2,num1-num2);
    printf("%d * %d = %d",num1,num2,num1*num2);
    printf("%d / %d = %d",num1,num2,num1/num2);
    return 0;

}
