#include <stdio.h>
#include <stdlib.h>

int main()
{float dollars,cents,Dollars,Cents,CCents,DDollars,total;
    printf("give your amount of bill (first dollers and then cents)\n");
    scanf("%f %f",&dollars,&cents);
    Dollars=dollars*.05;
    DDollars=dollars+Dollars;
    Cents=cents/100;
    CCents=Cents*.05;
    total=DDollars+CCents;
    printf("your total bill is %f dollers",total);
    return 0;
}
