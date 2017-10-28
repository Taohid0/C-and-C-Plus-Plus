#include <stdio.h>
#include <stdlib.h>
#define RATE 77.80

int main()
{   float dollar,taka;

    printf("enter the amount of taka\n");
    scanf("%f",&taka);

    dollar = taka/RATE;

    printf("ans is %f",dollar);

    return 0;
}
