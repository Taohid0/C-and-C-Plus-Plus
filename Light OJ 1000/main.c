#include <stdio.h>
#include <stdlib.h>

int main()
{int i,a,b,t;

    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",i,a+b);
    }
    return 0;
}
