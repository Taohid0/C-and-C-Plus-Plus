#include <stdio.h>
#include <stdlib.h>

int main()
{int individual_weight[1000],o,i,t,m,l,k,heighest_weight,egg,boil,sum;

   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d%d%d",&egg,&boil,&heighest_weight);
    o = egg;
    l=0;
    while(l<egg){
        scanf("%d",&individual_weight[l]);
        l++;
    }
    sum = 0;
    k=0;
    for(m=0;m<o && m<boil;m++){
        sum+=individual_weight[m];
        if(sum>heighest_weight ){
            break;}

         k++;
    }
    printf("Case %d: %d\n",i,k);
   }
    return 0;
}
