#include<stdio.h>
int main()
{
    char str[100];
    gets(str);

    char *token;
    token = strtok(str, " ,.!");
    while(token != NULL)
    {
        printf("%s\n",token);
        token=strtok(NULL, " ,.!");
    }

}
