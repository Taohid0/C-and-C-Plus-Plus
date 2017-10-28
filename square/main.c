#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i;

    printf("this program prints a table of squares\nplease enter number of entries in table\n");
                      scanf("%d",&n);

           i=1;
           while (i<=n){
            printf("%10d%10d\n",i,i*i);
            i++;

           }


    return 0;
}
