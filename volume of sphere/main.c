#include <stdio.h>
#include <stdlib.h>
#define Pi 3.1416
int main()
{ float r,volume;
    printf("what is the radius of the sphere?\n");
    scanf("%f",&r);
    volume=1.33333333f*Pi*r*r*r;
    printf("volume of the sphere is %.2f cubic meter",volume);
    return 0;
}
