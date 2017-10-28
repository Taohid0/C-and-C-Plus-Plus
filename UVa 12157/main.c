#include <stdio.h>
#include <stdlib.h>

int main()
{   long int t,i,j,time,n,result1,result2,result_mile,result_juice;

   scanf("%ld",&t);
   for(i=1;i<=t;i++){
    scanf("%ld",&n);
    result_mile = 0;
    result_juice = 0;
        for(j=1;j<=n;j++){
            scanf("%ld",&time);
            result1 = (time/30)+1;

            result2 = (time/60)+1;;

            result_mile += result1*10;
            result_juice+=result2*15;
        }
        if(result_mile<result_juice){
            printf("Case %ld: Mile %ld\n",i,result_mile);
        }
        else if(result_mile>result_juice){
            printf("Case %ld: Juice %ld\n",i,result_juice);
        }
        else
            printf("Case %ld: Mile Juice %ld\n",i,result_mile);

   }
    return 0;
}
