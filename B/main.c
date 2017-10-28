#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,a,b,t,result;

    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&a,&b);
        result = a+b;
        printf("Case %d: %d\n",i,result);

    }
    return 0;
}
