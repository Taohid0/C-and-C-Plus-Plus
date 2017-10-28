#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quarters,dimes,nickles,paisa;

    printf("give the number of quarters\n");
    scanf("%d",&quarters);

    printf("give the number of dimes\n");
    scanf("%d",&dimes);

    printf("give the number of nickles\n");
    scanf("%d",&nickles);

    paisa=(quarters*25)+(dimes*10)+(nickles*5);

    printf("the total value of the coins is %d paisa",paisa);
    return 0;
}
