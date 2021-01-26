#include <stdio.h>
int main ()
{
    int n,i,check=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            check=0;
            break;
        }
    }
    if(check==1)
    {
        printf("%d is prime ",n);
    }
    else
    {
        printf("%d not prime.",n);
    }
    return 0;
}
