#include <stdio.h>
#include <stdlib.h>

int main()
{int square,i,n,odd;

    printf("this program prints a table of squares\n"
           "enter number of entries in table\n");
           scanf("%d",&n);

           i=1;odd=3;

        for(square=1;i<=n;odd+=2){
        printf("%10d%10d\n",i,square);
        i++;
        square +=odd;}
    return 0;
}
