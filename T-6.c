#include <stdio.h>
int main ()
{
    int i;
    printf("Enter the number : ");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("%d is Even number.",i);
    }
    else
        {
            printf("%d is Odd number.",i);
        }
    return 0;
}
