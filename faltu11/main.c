#include <stdio.h>
#include <stdlib.h>

int main()
{int count;

    for(count=1;count<=100;count+=2)
    printf("%d ",count);
    for(count=2;count<=100;count+=2)
        printf(" %d",count);
    return 0;
}
