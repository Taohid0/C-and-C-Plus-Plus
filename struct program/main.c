#include <stdio.h>
#include <stdlib.h>

 int main()
{   struct book {
        char name;
        int page;
        float price;
        };

        struct book b1,b2,b3;

    printf("Enter book name,page number and price/n");

    scanf("%c%d%f",&b1.name,&b1.page,&b1.price);
    scanf("%c%d%f",&b2.name,&b2.page,&b2.price);
    scanf("%c%d%f",&b3.name,&b3.page,&b3.price);

    printf("here what you have entered : /n");

    printf("%c  %d  %.2f\n",b1.name,b2.page,b3.price);
    printf("%c  %d  %.2f\n",b1.name,b2.page,b3.price);
    printf("%c  %d  %.2f\n",b1.name,b2.page,b3.price);

return 0;

}
