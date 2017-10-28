#include <stdio.h>
#include <math.h>

int main()
{   long long int o, t,i,n,result;

    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        result = 0;
        o = sqrt(n);
        for(i=1;i<=o;i++){
            result+=n/i;
        }
        result = result*2-(o*o);
        printf("%lld\n",result);
    }
    return 0;
}
