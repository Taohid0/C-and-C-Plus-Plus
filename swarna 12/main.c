#include <stdio.h>
#include <stdlib.h>

int main()
{   int years;
    float purchased_price,salvage_price,result;

    printf("enter purchased price,salvage value and years of service\n");
    scanf("%f%f%d",&purchased_price,&salvage_price,&years);

    result = (purchased_price-salvage_price)/years;

    printf("answer is %.2f",result);
    return 0;
}
