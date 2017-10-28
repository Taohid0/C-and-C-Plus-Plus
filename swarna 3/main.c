#include <stdio.h>
#include <math.h>

int main()
{   float a,b,c,temp,s,result;

    printf("enter the value of a,b and c\n");
    scanf("%f%f%f",&a,&b,&c);

    s = (a+b+c)/2;

    temp = s*(s-a)*(s-b)*(s-c);

    result = sqrt(temp);

    printf("area of the triangle is %f\n\n",result);
    return 0;
}
