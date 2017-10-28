#include <stdio.h>
#include <stdlib.h>

double average (double a,double b){
        double result;

        return result = (a+b)/2;
}

int main()
{   double n1,n2;

    printf("enter two number : ");
    scanf("%lf%lf",&n1,&n2);
    printf("\n%lf",average(n1,n2));
    return 0;
}
