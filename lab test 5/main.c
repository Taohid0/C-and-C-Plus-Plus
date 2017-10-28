#include <stdio.h>
#include <stdlib.h>

int main()
{   struct book{
        char name[25];
        char writer[25];
        float price;
        int page;
        };
        struct book b[50];

    printf("enter number of books\n");
    scanf("%d",&b)

    return 0;
}
