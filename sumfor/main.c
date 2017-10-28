#include <stdio.h>
#include <stdlib.h>

int main()
{   int count;

    printf("first loop\n");
    for (count=1;count<=15;count++)
        printf("%d",count);

    printf("\nsecond loop \n");
    for (count=1;count<=10;count++)
        printf("%d",count);

    printf("\nthird loop\n");
    for(count=50;count<=10;count++)
        printf("%d",count);

    return 0;
}
