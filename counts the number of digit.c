//Write a C program that reads a number from the user and counts the number of digit in that number.
//Sample input: 1234
//Sample output: 4


#include <stdio.h>
int main ()
{
    int digit,count=0;
    printf("Enter a digit : ");
    scanf("%d",&digit);
    while (digit!=0)
    {
        digit=digit/10;
        count++;
    }
    printf("The number of the digits = %d",count);
    return 0;
}

