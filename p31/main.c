#include <stdio.h>
#include <stdlib.h>

int main()
{int num,multi,product = 0;

    while(product<100){

    printf("enter a number\n");
    scanf("%d",&num);
    multi = num*10;
    product+=multi;
    }

    printf("value is %d",product);

    return 0;
}
