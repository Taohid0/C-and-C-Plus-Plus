#include <stdio.h>
#include <math.h>


    double square (float a){

        double i;

        i = sqrt(a);

        return i;
        }

int main()
{   double k;
    float x;

    printf("enter a number : ");
    scanf("%f",&x);

    k = square(x);

    printf("%lf",k);


    return 0;
}
