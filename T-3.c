#include <stdio.h>
int main ()
{
    int i,j;

    printf("Enter the First number : ");
    scanf("%d",&i);
    printf("Enter the Second number : ");
    scanf("%d",&j);

    if(i!=j && i>j)
        {
            printf("First is greater.");
        }
        else if(i<j && i!=j)
                {
                    printf("Second is greater.");
                }
                else
                {
                    printf("They are equal.");
                }
    return 0;
}

