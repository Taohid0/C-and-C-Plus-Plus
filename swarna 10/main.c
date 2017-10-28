#include <stdio.h>
#include <stdlib.h>

int main()
{   int year;
    float amount,interest_rate,result;

    printf("enter the amount,interest rate and year\n");
    scanf("%f%f%d",&amount,&interest_rate,&year);

    result = amount+ (amount*(interest_rate/100)*year);

    printf("the amount is %.2f taka after %d years",result,year);
    return 0;
}
