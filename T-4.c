#include <stdio.h>
int main ()
{
    int i,j,sub;
    printf("Enter 1st number : ");
    scanf("%d",&i);
    printf("Enter 2nd number : ");
    scanf("%d",&j);
    if(i>j)
    {
        sub=i-j;
    }
    else
    {
        sub=j-i;
    }
    printf("The result is : %d",sub);
    return 0;
}
