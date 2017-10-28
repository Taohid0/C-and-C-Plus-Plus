#include <stdio.h>
#include <stdlib.h>

int main()
{   float celsius,fahrenheit;

    printf("enter the value of temperature in Celsius scale : \n\n");
    scanf("%f",&celsius);

    fahrenheit = ((9*celsius)/5)+32;

    printf("the value of temperature in Celsius scale is %f\n\n",fahrenheit);

    return 0;
}
