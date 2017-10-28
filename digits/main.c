//calculates the number of digits in an integer

#include <stdio.h>
#include <stdlib.h>

int main()
{int digit,num;

    printf("enter an nonnegative integer number\n");
    scanf("%d",&num);

    digit=0;
    do{
        num/=10;
        digit++;
    }while (num>0);
    printf("the number has %d digit(s)",digit);

    return 0;
}
