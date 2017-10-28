#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,*ptr, odd[] = {1,3,5,7,9};

    ptr = odd;

    for(i=0;i<5;i++){
    printf("%d\n",*ptr++);
    }
    return 0;
}
