#include <stdio.h>
#include <stdlib.h>


int main()
{   long long int test,sum,i,o,n;

   scanf("%lld",&test);

   for(i=1;i<=test;i++){
    scanf("%lld",&n);
    o = n;
    sum = 0;

         while(n!=0){
            sum+=(n%10)*(n%10);
            n /=10;
            if(sum>=10 && n == 0){
                n = sum;
                sum = 0;
            }
         }

         if(sum==1){
            printf("Case #%lld: %lld is a Happy number.\n",i,o);
         }
         else
            printf("Case #%lld: %lld is an Unhappy number.\n",i,o);
   }
    return 0;
}
