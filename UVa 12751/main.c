#include <stdio.h>
#include <stdlib.h>

int main()
{   long int i,t,j,temp1,temp2,total_marble,x,k,result;
    scanf("%ld",&t);
    for(i=1;i<=t;i++){

        scanf("%ld%ld%ld",&total_marble,&k,&x);
            temp1 = 0;
            temp2 = 0;
            for(j=1;j<=total_marble;j++){
            temp1+=j;
        }
        for(j=0;j<k;j++){
            temp2+=(x+j);
        }

        result = temp1-temp2;
        printf("Case %ld: %ld\n",i,result);

    }
    return 0;
}
