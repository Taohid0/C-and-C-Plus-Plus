#include <stdio.h>
#include <math.h>

#define pi 2*acos(0.0)
int main()
{   double r,s;

    while(scanf("%lf%lf",&r,&s)==2){

        printf("%.3lf\n",r*r*s*sin((2*pi)/s)/2);
    }
    return 0;
}
