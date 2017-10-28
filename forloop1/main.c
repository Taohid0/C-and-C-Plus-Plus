#include <stdio.h>
#include <stdlib.h>

int main()
{   int count;

    printf("first loop \a\n");
    for ( count = 1;count <= 10;count++)
        printf("%d",count);

    printf("\nsecond loop\a\n");
    for ( count = 1;count <= 15;count++);
    printf("%d",count);

    printf("third loop \a\n");
    for ( count = 100;count <=5;count++)
        printf("%d",count);

    return 0;
}
