#include <stdio.h>
#include <stdlib.h>

int main()
{int x,y,z;

    //printf("enter the values of x,y and z\n");
   // scanf("%d%d%d",&x,&y,&z);
    x=10,y=5,z=15;
    printf("  --x     --y    --z\n");
    printf("-----------------------\n");

    while(--x,--y,--z)
    printf("%5d%5d%5d\n",x,y,z);
    return 0;
}
