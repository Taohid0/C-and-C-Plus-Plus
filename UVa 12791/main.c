#include <stdio.h>
#include <stdlib.h>

int main()
{   long int a,b,sum1,sum2,count;

    while(scanf("%ld%ld",&a,&b)==2){
        sum1=0;
        sum2=0;
        count = 0;
        while(1){
            sum1+=a;
            sum2+=b;
            count++;
            if((sum2-sum1)>=b){
                break;
            }
        }
        printf("%ld\n",count);
    }
    return 0;
}
