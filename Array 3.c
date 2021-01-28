#include <stdio.h>

int main ()
{
    int a[5]= {12,23,13,132,14};
    int i,sum=0,sum2=0;

    for(i=0; i<5; i++)
    {

        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
            sum=sum+a[i];

        }
        else
        {
            printf("%d\t",a[i]);
            sum2=sum2+a[i];
        }
    }
    printf("\nOdd summation = %d",sum2);
    printf("\tEven summation = %d",sum);

    return 0;
}

