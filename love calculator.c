#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{

int i,l1;
long int s1,s2,t;
char name1[50],name2[50];
void title(),del();
clrscr();
title();
printf("NOTE\n----\nThe information showing in this program is not CORRECT, It is just for fun");
delay(5000);
clrscr();
title();
printf("Please Enter your name\n");
scanf("%s",name1);
printf("Please Enter your partner's name\n" );
scanf("%s",name2);
printf("Please wait Calculating.");
for(i=0;i<8;i++)
{
del();
}
clrscr();
title();
printf("Calculation completed");
delay(1000);
clrscr();
title();
printf("Press any key to view result");

l1=0;
for(i=0;i<50;i++)
{
if (name1[i]!='\0')
{
l1++;
continue;
}
break;
}
s1=0;
for(i=0;i<l1;i++)
{
s1=s1+name1[i];
}
getch();
l1=0;
for(i=0;i<50;i++)
{
if (name2[i]!='\0')
{
l1++;
continue;
}
break;
}
s2=0;
for(i=0;i<l1;i++)
{
s2=s2+name2[i];
}
t=s1+s2;
while(t>100)
{
    t=t/10;
}
clrscr();
title();
printf("the result is %ld%",t);
getch();
}
void title()
{
printf("!!!!!!!!! Love Calculator !!!!!!!!!\n");
}
void del()
{
delay(500);
printf("..");
}

