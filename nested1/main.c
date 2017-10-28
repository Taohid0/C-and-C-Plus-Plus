#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j;

    for(i=1;i<=5;i++)
        for(j=1;j<=5;j=+i)
    printf("#\n");
    return 0;
}
