#include<stdio.h>
int main ()
{
    int a;

    scanf("%d",&a);
    if(a>=80)
    {
        printf("Grade : A+");
        printf("CGPA :5.00");
    }
    else if (a>=70)
    {
        printf("Grade : A");
        printf("CGPA :4.00");
    }
    else if (a>=60)
    {
        printf("Grade : A-");
        printf("CGPA :3.50");
    }
    else if (a>=50)
    {
       printf("Grade : B");
       printf("CGPA : 3.00");
    }
    else if (a>=40)
    {
        printf("Grade : B-");
        printf("CGPA :2.00");
    }
    else if (a>=33)
    {
        printf("Grade : C");
        printf("CGPA :1.00");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
