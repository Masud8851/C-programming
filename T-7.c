#include <stdio.h>

int main ()

{
    int i;
    printf("Enter the number : ");
    scanf("%d",&i);
    if(i%2==0 && i>10)
    {
        printf("%d",i+1>10);
    }
    else
    {
        printf("%d",i--);
    }
    return 0;
}
