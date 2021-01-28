#include<stdio.h>

int main ()
{
int a;
int b;
int c;
printf("Enter the First number :");
scanf("%d",&a);

printf("Enter the Second number :");
scanf("%d",&b);

if(a>b)
{
printf("First is greater than second\n");
}
else
{
    printf("Second is greater than first\n");
}
if(a=b)
{
printf("The numbers are equal.\n");
}

return 0;

}
