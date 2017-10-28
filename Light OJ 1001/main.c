#include <stdio.h>
#include <stdlib.h>

int main()
{int i,a,t;

    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&a);
        if(a>10){
        printf("%d %d\n",10,a-10);}
        else
            printf("0 %d\n",a);
    }
    return 0;
}
