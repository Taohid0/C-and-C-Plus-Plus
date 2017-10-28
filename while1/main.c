#include <stdio.h>
#include <stdlib.h>

int main()
{   int a=99999999,b=9999*99999,x=9966565;

    printf("  --a  --b  --x\n");
    printf(" ---------------\n");

   while (--a,--b,--x)
            printf("%5d %5d %5d\n",a,b,x);

    return 0;
}
