#include <stdio.h>
#include <stdlib.h>

double average(double a,double b){

    return (a+b)/2;
    }

int main()
{   double x,y,z;
    printf("enter three numbers\n");
    scanf("%lf%lf%lf",&x,&y,&z);

    printf("%.2lf",average(x,y));
    printf("\n%.2lf",average(y,z));
    printf("\n%.2lf",average(z,x));

    return 0;
}
