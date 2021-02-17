#include <stdio.h>
int main ()
{
    int n=1,i,c=0;
    //scanf("%d",&n);

    for(n=1; n<=5; n++)
    {
        for(i=1; i<=10; i++)
        {
            //c=c+n;
            printf("%d x %d = %d\n",n,i,n*i);
        }
    }
    return 0;
}
