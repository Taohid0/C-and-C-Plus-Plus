#include <stdio.h>
#include <stdlib.h>

int main()
{   int sum,n,range;

    printf("how many numbers you want to calculate?\n");
    scanf("%d",&range);

    sum=0;

    for(n=1;n<=range;n++)
        sum +=n;

        printf("sum of all numbers is %d",sum);

    return 0;
}
