#include <stdio.h>
#include <stdlib.h>

int main()
{   int num,square,odd,i;

    printf("this program prints a table of squares.\n"
           "enter a number of entries in table.\n");
           scanf("%d",&num);

            i=1;
            odd=3;
            for (square = 1;i<=num;odd+=2){
            printf("%10d%10d\n",i,square);
            i++;
            square+=odd;
           }
    return 0;
}
