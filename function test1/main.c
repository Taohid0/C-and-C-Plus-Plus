#include <stdio.h>
#include <stdlib.h>

 double multi(double a,double b,double c){
    return a*b*c;
    }

int main()
{   double x,y,z;

    printf("enter three numbers\n");
    scanf("%lf%lf%lf",&x,&y,&z);


    printf("%.2lf",multi(x,y,z));

    return 0;
}
