#include <stdio.h>
#include <stdlib.h>

int main()
{   int h1,h2,m1,m2,ff1,ff2,result;

    while(1){
           scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
           if(h1 == 0 && m1 ==0 && h2==0 && m2==0){
                       break;
           }
            if(h1 == 0){
               h1 = 24;
        }
        if(h2 == 0){
            h2 = 24;
        }
        ff1 = h1*60+m1;
        ff2 = h2*60+m2;

        result = ff2-ff1;
        if(result<0){
            result = 60*24+result;
        }
        printf("%d\n",result);

    }


    return 0;
}
