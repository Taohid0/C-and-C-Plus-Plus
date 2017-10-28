#include <stdio.h>
#include <stdlib.h>

int main()
{int charge,tip,salesTax,total;
    printf("how muck Tk you have been charged for the food only?\n");
    scanf("%d",&charge);
    tip=charge*.15;
    salesTax=charge*.07;
    total=tip+salesTax;
    printf("your total bill including  tip Tk%d and sales tax Tk%d is Tk %d",tip,salesTax,total);
    return 0;
}
