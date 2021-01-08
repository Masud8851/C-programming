#include<stdio.h>
int main()
{
    char str[100];
    gets(str);

    char *p;
    p=strtok(str, " ");
    while(p!= NULL)
    {
        printf("%s ",p);
        p=strtok(NULL, " ");
    }
}
