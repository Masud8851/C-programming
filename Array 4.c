#include <stdio.h>

int main ()
{
    int a[5]= {2,2,2,1,5};
    int i,n,check=0,sum=0;

    scanf("%d",&n);
    for(i=0; i<5; i++)
    {
        if(n==a[i])
        {
            sum=sum+a[i];
            check++;
        }
    }
    if (check>0)
    {
        printf("found %d times \n",check);
    }
    else
    {
        printf("Not found\n");
    }
    printf("Total summation of checkers :%d",sum);

    return 0;
}
