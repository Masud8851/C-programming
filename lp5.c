#include<stdio.h>
int main ()
{
    int i;
    int j=0;
    for (i=0;i<=5;i++)
    {
        while (j<=5)
        {
            printf("*");
            j++;
        }
        printf("\n");
    }
    return 0;
}
