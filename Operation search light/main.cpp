#include <stdio.h>

int main(){
          long int t,min1,min2,i,j,t2,area;

        scanf("%ld",&t);
        min1 = -1;
        min2 = -2;

        for(i=1;i<=t;i++){
            scanf("%ld",&t2);
            for(j=1;j<=t2;j++)
            {
                scanf("%ld",&area);
            if(area>min1)
            {
                min2 = min1;
                min1 = area;

            }
            else if(area>min2)
            {
                min2 = area;
            }

            }
            printf("Case %ld: %ld\n",i,min1*min2);
        }
return 0;


}
