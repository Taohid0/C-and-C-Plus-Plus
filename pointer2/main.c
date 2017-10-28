#include <stdio.h>
#include <stdlib.h>

int main()
{   int x = 44,y = 40,*z;

    z = &x;

    printf("%d\n%d\n%d\n",x,y,z);

    y = *z;
    *z = 10;

    printf("%d\n%d\n%d\n",x,y,z);

    return 0;
}
