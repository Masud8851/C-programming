#include <stdio.h>
int main ()
{
    double i,j,sub;
    printf("Enter 1st number : ");
    scanf("%lf",&i);
    printf("Enter 2nd number : ");
    scanf("%lf",&j);
    if(i>j)
    {
        sub=i-j;
    }
    else
    {
        sub=j-i;
    }
    printf("The result is : %.2lf",sub);
    return 0;
}
