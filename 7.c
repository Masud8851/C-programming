#include <stdio.h>

int main()
{
    int a,b,c,d,e;

    printf("Bangla : ");
    scanf("%d",&a);

    printf("English : ");
    scanf("%d",&b);

    printf("ICT : ");
    scanf("%d",&c);

    printf("Physics : ");
    scanf("%d",&d);

    printf("Mathematics : ");
    scanf("%d",&e);

    double x,avr;
    avr=(a+b+c+d+e)/5;

    printf("Average : %lf",avr);

    x=avr;

    if(x>=80)
    {
        printf("\nGrade : A+");
        printf("\nCGPA :5.00");
    }
    else if (x>=70)
    {
        printf("\nGrade : A");
        printf("\nCGPA : %2lf",x);
    }
    else if (x>=60)
    {
        printf("\nGrade : A-\n");
        printf("\nCGPA : %2lf",x);
    }
    else if (x>=50)
    {
       printf("\nGrade : B\n");
       printf("\nCGPA : %2lf",x);
    }
    else if (x>=40)
    {
        printf("\nGrade : B-\n");
        printf("\nCGPA : %2lf",x);
    }
    else if (x>=33)
    {
        printf("\nGrade : C\n");
        printf("\nCGPA : %2lf",x);
    }
    else
    {
        printf("\nFail");
    }
    return 0;
}
