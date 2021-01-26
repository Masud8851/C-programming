//Write a C program to read any number and print its reverse.
//Sample input: 12345
//Sample output: 54321



#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
    printf("%d",rev);
    return 0;

}
