#include<stdio.h>
int main()
{
    char str[100];
    char *p;

    while(gets(str))
    {
        p=strtok(str, " ");
        while (p!= NULL)
        {
            printf("%s ",p);
            p=strtok(NULL, " ");
        }
        printf("\n");
    }
    return 0;
}
