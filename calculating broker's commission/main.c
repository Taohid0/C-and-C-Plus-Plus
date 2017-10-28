/*calculating broker's commission */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{   float amount,commission;

    printf("enter value of the trade\n");
    scanf("%f",&amount);

    if (amount<2500.00f)
        commission = 30.00f+.017f*amount;

    else if (amount<62500.00f)
        commission = 56.00f+.0066f*amount;

    else if (amount<20000.00f)
        commission = 76.00f+.0034f*amount;

    else if (amount<50000.00f)
        commission = 100.00f+.0022f*amount;

    else if (amount<500000.00f)
        commission = 155.00f+.0011f*amount;

    else
        commission = 255.00f+.0009f*amount;

    if (commission<39.00f)
        commission = 39.00f;

     printf("commission $%.2f",commission);

     getch();

    return 0;
}
