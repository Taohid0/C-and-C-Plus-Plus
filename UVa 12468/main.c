#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,result;

    while(scanf("%d%d",&a,&b)==2){
        if(a==-1 && b==-1){
            break;
        }
        result = a-b;
        if(result<0){
            result *=-1;
        }
        if(result>=50){
            result = 100-result;
        }
        printf("%d\n",result);
    }
    return 0;
}
