#include<stdio.h>
int main ()
{
    int n,i;
    //int m=0;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1; i<=10; i++)
    {
        //m=m+n;
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
