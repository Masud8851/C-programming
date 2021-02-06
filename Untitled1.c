#include <stdio.h>
const int max=3;
int main ()
{
    int var []={10,100,200};
    int i, *ptr;
    ptr=&var[max-1];
    for (i=max;max>0;i--)
    {
        printf("Adress of var[%d] = %x\n",i,ptr);
        printf("Value of var[%d] = %d\n",i,*ptr);

    }
    return 0;
}
