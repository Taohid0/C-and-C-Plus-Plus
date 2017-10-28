#include <stdio.h>
#include <stdlib.h>

int main()
{   int x,*y;
    x = 1;
    y = &x;

    printf("%d       %x       %x\n",x,y,&x);

    return 0;
}
