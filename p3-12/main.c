#include <stdio.h>
#include <stdlib.h>

int main()
{float min;

    for(min=10;min<=30;min+=5)
    printf("amount of burned calories after %.0f mins is %.2f\n",min,min*3.9);
    return 0;
}
