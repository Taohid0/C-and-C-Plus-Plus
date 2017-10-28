#include <stdio.h>
#include <stdlib.h>

int main()
{int hours,distance;
    printf("how many hours the car has trevelled?\n");
    scanf("%d",&hours);
    distance=60*hours;
    printf("in %d hours the car has travelled %d miles",hours,distance);
    return 0;
}
