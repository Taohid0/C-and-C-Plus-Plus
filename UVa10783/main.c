#include <stdio.h>
#include <stdlib.h>

int main()
{   int test,a,b,i,j,sum;

    scanf("%d",&test);

    for(i=1;i<=test;i++){
            sum = 0;
        scanf("%d",&a);
        scanf("%d",&b);

         if(a<b){
              for(j=a;j<=b;j++){
            if(j%2 != 0){
                sum+=j;
            }
         }}
         else
         for(j=b;j<=a;j++){
            if(j%2 != 0){
                sum+=j;
            }
         }
            printf("Case %d: %d\n",i,sum);

    }




    return 0;
}
