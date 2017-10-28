#include <stdio.h>
#include <stdlib.h>

int main()
{   int milkLiters,milkCartons,producingCost,profit;

    printf("how many liter of milk produced in the morning?\n");
    scanf("%d",&milkLiters);

    milkCartons=milkLiters/3.78;
    printf("%d cartons of milk needed to hold milk\n",milkCartons);

    producingCost=milkLiters*60;
    printf("the cost of producing milk is tk%d\n",producingCost);

    profit=milkLiters*30;
    printf("the profit for producing milk is tk%d",profit);
    return 0;
}
