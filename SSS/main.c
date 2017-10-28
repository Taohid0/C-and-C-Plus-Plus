#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{float a,b,c,s,area;
    printf("give the length of a side\n");
    scanf("%f",&a);

    printf("give the length of b side\n");
    scanf("%f",&b);

    printf("give the length of c side\n");
    scanf("%f",&c);

    s=.5f*(a+b+c);
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("the area of the triangle is %f",area);
    return 0;
}
