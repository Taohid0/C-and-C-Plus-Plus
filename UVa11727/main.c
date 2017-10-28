#include <stdio.h>
#include <stdlib.h>

int main()
{   int test,i,a,b,c,kept;

    scanf("%d",&test);

    for(i=1;i<=test;i++){
            scanf("%d%d%d",&a,&b,&c);

            if(a>b){
                if(b>c)
                    kept = b;
                else
                    kept = c;
            }
            else
                if (a>c)
                   kept = a;
                else
                    kept  = c;

            printf("%d",kept);
            }

    return 0;
}
