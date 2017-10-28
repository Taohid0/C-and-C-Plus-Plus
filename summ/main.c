#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,range,sum;

    printf("how many numbers do u want to calculate?\n");
    scanf("%d",&range);

    sum = 0;
    for (n = 1;n <=range;n++)
        sum=sum+n,
    printf("%d",sum);

    return 0;
}
