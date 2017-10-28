#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0)
            printf("%5d",i);
    }
    return 0;
}
