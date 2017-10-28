#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main()
{  float r,a,v;

    printf("enter the valur of r : ");
    scanf("%f",&r);

    a = PI*r*r;
    v = (4/3)*PI*r*r*r;

    printf("the area of the circle is %f\nthe volume of the circle is %f\n\n",a,v);
    return 0;
}
