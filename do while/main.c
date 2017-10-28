#include <stdio.h>
#include <stdlib.h>

int main()
{   int digit,n;

    printf("enter an integer\n");
    scanf("%d",&n);

    digit=0;
    do{
        n/=10;
        digit++;
    } while (n>0);
    printf("the number has %d digit (s)",digit);

    return 0;
}
