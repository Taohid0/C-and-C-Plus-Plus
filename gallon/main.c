#include <stdio.h>
#include <stdlib.h>

int main()
{int capacity,milesPerGallon,distance;

    printf("give the capacity of taking fuel of the automobile\n");
    scanf("%d",&capacity);

    printf("give miles per gallon of the automobile\n");
    scanf("%d",&milesPerGallon);

    distance=capacity*milesPerGallon;

    printf("the automobile can go %d miles without refuelling",distance);

    return 0;
}
