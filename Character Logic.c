#include <stdio.h>
int main()
{
   char ch = 'M';
   if (ch >= 'a' && ch<= 'z')
   {
   printf("%c is Lower case Letter.",ch);
   }
    else if (ch >= 'A' && ch <='Z')
   {
   printf(" %c is Upper case Letter.",ch);
   }
   return 0;
}
