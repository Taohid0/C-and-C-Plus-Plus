#include <stdio.h>
#include <stdlib.h>

int main()
{int squareFeet,acres;
    printf("How many square feet land you have?\n");
    scanf("%d",&squareFeet);
    acres=squareFeet/43560;
    printf("You have %d acres land",acres);
    return 0;
}
