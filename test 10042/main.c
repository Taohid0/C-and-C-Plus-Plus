#include <stdio.h>
#include <math.h>
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
long int digit_sum(long int n){
        long int sum = 0;
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        return sum;
        }
int main()
{long int n = 4937774;

    printf("%ld",_sum(n));
    return 0;
}
