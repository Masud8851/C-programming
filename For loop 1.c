#include<stdio.h>
int main ()
{
    int i,n,a[200],b,max;
    scanf("%d",&n);       /* Array size*/

    for(i=0; i<n ; i++)
        scanf("%d",a);  /* take array */
        max = a[0];
        if(a[i] < max)
            i++;


    printf("%d",max);
    return 0;


}
