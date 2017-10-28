#include <stdio.h>
#include <string.h>

long int digit (long int n){
        long result=0;
        do{result++;
            n/=10;

        }while(n);
        return result;
        }
long int rev (long int n){
            long int res = 0,i;
            long int fact= 1;
            for(i=1;i<digit(n);i++){
                fact*=10;
            }

            while(n){
                res += (n%10)*fact;
                fact/=10;
                n/=10;
            }
            return res;}


int main()
{   long int t,n,r1,k;

    scanf("%ld",&t);

    while(t--){

        scanf("%ld",&n);
        k = 0;
        r1 = rev(n);
        while(r1!=n){
            n = n+r1;
            r1 = rev(n);
            k++;
        }
        printf("%ld %ld\n",k,n);

    }
    return 0;
}
