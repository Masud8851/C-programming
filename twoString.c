#include<stdio.h>
int main()
{
    int i,j;
    char str1[100],str2[100];
    gets(str1);

    gets(str2);
    i=strlen(str1);
    str1[i]=' ';
    for(i=i+1, j=0; str2[j]!='\0';j++,i--)
        str1[i]=str2[j];
    str1[i]='\0';
    printf("%s",str1);
    return 0;

}
