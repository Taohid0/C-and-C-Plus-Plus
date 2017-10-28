//calculates a broker's commission
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{float commission,value;

    printf("enter value of trade\n");
    scanf("%f",&value);

    if (value<2500.00f)
        commission=30.00f+(value*.017f);

    else if (value<6250.00f)
        commission=56+(value*.0066f);

    else if (value<20000.00f)
        commission=76+(value*.0034f);

    else if (value<50000.00f)
        commission=100+(value*.0022f);

    else if (value<500000.00f)
        commission=155+(value*.0011f);

 else commission=255+(value*.0009f);

    if (commission<39.00f)
        commission=39.00f;

        printf("commission: Tk.%.2f\n",commission);
        getch();

    return 0;
}
