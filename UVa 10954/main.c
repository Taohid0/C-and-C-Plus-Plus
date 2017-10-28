#include <stdio.h>
#include <stdlib.h>

int main()
{   long int i,t,n,sum;

    while(1){
        scanf("%ld",&t);
        if(t==0){
            break;
        }
        sum=0;
        for(i=1;i<=t;i++){
            scanf("%ld",&n);
            sum+=n;
        }
        printf("%ld\n",sum);
    }
    return 0;
}
