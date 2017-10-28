#include <stdio.h>
#include <stdlib.h>

int main()
{   int t,i,player,pass,pln,result;

      scanf("%d",&t);

      for(i=1;i<=t;i++){
        scanf("%d%d%d",&player,&pln,&pass);
        result = pln+pass;
       if(result>player){
        result = result-player;
       }

            printf("Case %d: %d\n",i,result);
    }
    return 0;
}
