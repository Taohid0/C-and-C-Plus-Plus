#include <stdio.h>
#include <math.h>

long int digit_sum(long int n){
        long int sum = 0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        return sum;
        }

long int _sum (long int n){
           long int sum = 0,i;
             for(i=2;i<=n;i++){
                if(n%i==0){
                    sum+=i;
                    n = n/i;
                    i = 1;}
                    if(n==1){
                        break;
                    }

                }
                return sum;}
int main()
{long int t,n,k;
    scanf("%ld",&t);
    while(t--){
        scanf("%ld",&n);
        for(k=n;k<=1000000009;k++){
            if(digit_sum(n)==_sum(n)){
                break;
            }
        }
       printf("%ld\n",k);
    }printf("%ld",digit_sum(n));
    return 0;
}
