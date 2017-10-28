#include <stdio.h>
#include <stdlib.h>

int main()
{  long long int t,k,n;

   scanf("%lld",&t);
   while(t--){
    scanf("%lld",&n);

    k = 1;

    while(n>=k){
        n-=k;

        k++;
    }
      printf("%lld\n",k-1);
   }
    return 0;
}
# include <stdio.h>
# include <math.h>
int main()
{
    long long i,num,test,sum;
   scanf("%lld",&test);
   for(i=1;i<=test;i++)
   {
       scanf("%lld",&n);
       sum = (sqrt(1+2*4*num)-1)/2;
       printf("%lld\n",sum);
   }
    return 0;
}
