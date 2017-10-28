#include <stdio.h>
#include <stdlib.h>

int main()
{   int count;

    printf("first loop\n");
    for (count=1;count<=100;count++){
        if (count ==50)
            break;
        printf("\n%d",count);
    }

    return 0;
}
