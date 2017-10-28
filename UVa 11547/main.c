#include <stdio.h>
#include <stdlib.h>

int main()
{   int t,n,i,result;

    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);

        result = ((((((n*567)/9)+7492)*235)/47)-498);

        result = result/10;
        result = result%10;

        if(result<0){
            result = result*-1;
        }
        printf("%d\n",result);
    }

    return 0;
}
