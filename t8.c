#include<stdio.h>

void main()
{
int a;
//printf("The multiples of 3 between 1 and 50 are :");
for(a=1;a<=50;a++)
{
if(a%2==0 || a%5==0)
{
printf("\n%d",a);
}
}
return 0;
}
