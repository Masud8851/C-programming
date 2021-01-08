#include<stdio.h>
int main()
{
    int i;
    char str[100];

    gets(str);
    for(i=0; str[i]; i++)
        if( str[i] >='a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' )
            printf("%c",str[i]);
}
