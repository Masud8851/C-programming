#include<stdio.h>
int main()
{
    int i;
    char str[100];

    gets(str);
    for(i=0; str[i]; i++)
        if(str[i]==' ')
            printf("\n");
        else
            printf("%c",str[i]);
    return 0;
}
