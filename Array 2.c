#include <stdio.h>
int main ()
{
    int a[5]={1,2,4,3,5};
    int i;

    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
        }
        else
        {
            printf("%d\t",a[i]);
        }
    }
    return 0;
}
