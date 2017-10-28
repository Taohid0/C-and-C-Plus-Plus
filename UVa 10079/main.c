#include <stdio.h>
#include <stdlib.h>

int main()
{   long int n,ans;

    while(1){
            scanf("%ld",&n);
            if(n<0){
                break;
            }
        ans = (n*n+n+2)/2;
        printf("%ld\n",ans);
    }
    return 0;
}
