#include <stdio.h>
#include <stdlib.h>

int main()
{int n,sum=0;

    printf("this program sums a series of numbers\n"
           "enter n to terminate");
           scanf("%d",&n);

           while(n!=0){//scanf("%d",&n);
            sum+=n;
            n++;
            scanf("%d",&n);

           }
           printf("the sum is %d\n",sum);


    return 0;
}
