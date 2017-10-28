#include <stdio.h>
#include <stdlib.h>

int main()
{   struct book {
            char name[10];
            float price;
            int pages;};
            struct book b1,b2,b3;
    printf("Enter name,price and number of pages of three books\n");
    scanf("%s\n%f%d",b1.name,&b1.price,&b1.pages);
    scanf("%s\n%f%d",b2.name,&b2.price,&b2.pages);
    scanf("%s\n%f%d",b3.name,&b3.price,&b3.pages);

    printf("hare what you have entered\n");

    printf("%s   %f   %d\n",b1.name,b1.price,b1.pages);
    printf("%s   %f   %d\n",b1.name,b1.price,b1.pages);
    printf("%s   %f   %d\n",b1.name,b1.price,b1.pages);

    return 0;
}
