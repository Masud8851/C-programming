#include<stdio.h>
int main ()
{
    int n=1;

    while(n<=100)
    {


        if(n>10)
        {
            break;
        }
        printf("%d\n",n);
        n++;
    }

    return 0;
}
