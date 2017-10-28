#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,sum=0;

    printf("this programs sums a series of integers.\n\
           enter 0 to terminate\n");
           scanf("%d",&n);

           while (n!=0){
            sum+=n;
            scanf("%d",&n);
           }
            printf("the sum is %d",sum);
    return 0;
}
