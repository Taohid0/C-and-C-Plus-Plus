#include <stdio.h>
#include <stdlib.h>

int main()
{int originalPrice,discount,salePrice;
    printf("Enter the item's original price\n");
    scanf("%d",&originalPrice);
    discount=originalPrice*.2;
    salePrice=originalPrice-discount;
    printf("the sale price is tk %d",salePrice);
    return 0;
}
