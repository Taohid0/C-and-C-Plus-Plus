#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
int main()
{float pizzaPrice,pizzaRadius,areaOfPizza,pricePerSquareInch;

    printf("What is the radius of the pizza?\n");
    scanf("%f",&pizzaRadius);

    printf("what is the price of the pizza?\n");
    scanf("%f",&pizzaPrice);

    areaOfPizza=PI*pizzaRadius*pizzaRadius;
    pricePerSquareInch=pizzaPrice/areaOfPizza;

    printf("price per square inch of the pizza is %f",pricePerSquareInch);
    return 0;
}
