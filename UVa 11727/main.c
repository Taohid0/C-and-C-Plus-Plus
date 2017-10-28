#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c,keep,t,i;

    scanf("%d",&t);

    for(i=1;i<=t;i++){
        scanf("%d%d%d",&a,&b,&c);

        if (a>b && b>c){
            keep  = b;
        }
        if (a>c && c>b){
            keep  = c;
        }
        if (b>a && a>c){
            keep  = a;
        }
        if (b>c && c>a){
            keep  = c;
        }
        if (c>b && b>a){
            keep  = b;
        }
        if (c>a && a>b){
            keep  = a;
        }

        printf("Case %d: %d\n",i,keep);
    }
    return 0;
}
