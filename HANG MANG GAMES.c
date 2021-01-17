#include <conio.h>
#include <stdio.h>
#include <windows.h>
void gotoxy(int x,int y);
int main(int argc,char *argv[])
{
char a[6]={'j','u','n','a','i','d'};
char z=0;
printf("Wecome to the hangman game\n");
printf("You have to guess the word shown \n\n You have 5 chances to guess otherwise the game will be over \n\n Each successful guess wil give you 10 points");
printf("\n Score");
printf("\nThe Game starts now.Guess the given word \n");
gotoxy(7,7);
printf("_ _ _ _ _ _\n");
do
{
printf("Enter the alphabet(A-Z):");
scanf("%char",&z);
if(z=='j')
{
gotoxy(7,7);
printf("%c",z);
printf("\n\n");
}
else if(z=='u')
{
gotoxy(9,7);
printf("%c",z);
printf("\n\n");
}
else if(z=='n')
{
gotoxy(11,7);
printf("%c",z);
printf("\n\n");
}
else if(z=='a')
{
gotoxy(13,7);
printf("%c",z);
printf("\n\n");
}
else if(z=='i')
{
gotoxy(15,7);
printf("%c",z);
printf("\n\n");
}
else if(z=='d')
{
gotoxy(17,7);
printf("%c",z);
printf("\n\n");
}
else{
printf("Wrong guess \n");
z++;

}
}while(z!=5);
_getch();
return 0;
}
void gotoxy(int x,int y)
{
COORD coord;
coord.X=x;
coord.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
