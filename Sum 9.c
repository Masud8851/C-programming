#include <stdio.h>

int main ()

{
    int num1 , num2 , value;
    char sign ;

    printf("Enter Number 1 :");
    scanf("%d",num1);

    printf("Enter Number 2 :");
    scanf("%d",num2);

    value = num1+num2;
    sign = '+';
    printf("\n%d %c %d = %d",num1,sign,num2,value);

    value = num1-num2;
    sign = '-';
    printf("\n%d %c %d = %d",num1,sign,num2,value);

    value = num1*num2;
    sign = '*';
    printf("\n%d %c %d = %d",num1,sign,num2,value);

    value = num1/num2;
    sign = '/';
    printf("\n%d %c %d = %d",num1,sign,num2,value);


    return 0;

}
