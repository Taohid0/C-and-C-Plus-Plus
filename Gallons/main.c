#include <stdio.h>
#include <stdlib.h>

int main()
{int miles;
int gallons;
int MPG;
    printf("How many miles the car was driven?\n");
    scanf("%d",&miles);
    printf("How many gallons of gas used?\n");
    scanf("%d",&gallons);
    MPG=miles/gallons;
    printf("the Car's MPG (Miles per gallon) is %d",MPG);
    return 0;
}
