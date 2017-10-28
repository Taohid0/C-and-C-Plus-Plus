#include <stdio.h>
#include <stdlib.h>

double average (double a,double b){
          double avg;

            avg=(a+b)/2;
            return avg;
            }

int main()
{   double m,n;

    printf("enter two numbers\n");
    scanf("%lf%lf",&m,&n);

    if (average (m,n)>0)
        printf("average is positive");
    else
        printf("average is negative");

    return 0;
}
