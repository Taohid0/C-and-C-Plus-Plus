#include <stdio.h>
#include <conio.h>

int main()
{int pennies,nickels,dimes,quarters;

    printf("give the number of pennies,nickels,dimes and quartes.\n");
    scanf("%d%d%d%d",&pennies,&nickels,&dimes,&quarters);

    if (((pennies*1)+(nickels*5)+(dimes*10)+(quarters*25)) == 100)
        printf("congratulation! you have won the game");

    else if ((pennies*1)+(nickels*5)+(dimes*10)+(quarters*25)<100)
        printf("sorry,it was less than one dollar");

    else
        printf("sorry,it was more than one dollar");
    getch();

    return 0;
}
