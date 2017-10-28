#include <stdio.h>
#include <stdlib.h>

int main()
{   int y,z,w;
    float x;

    printf("enter the values of y,z and w\n");
    scanf("%d%d%d",&y,&z,&w);

    x = ((9*y*y*y) + (21*z*z) -30 ) / (10*w);

    printf("the value of x is %f",x);

    return 0;
}
