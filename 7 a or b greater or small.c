#include<stdio.h>

int main ()
{
int num1;
int num2;

printf("Enter num 1 :");
scanf("%d",&num1);

printf("Enter num 2 :");
scanf("%d",&num2);


if(num1> num2)
{
printf("First is greater than the second\n");
}
else
{
    printf("Second is greater than the first\n");
}

return 0;

}
