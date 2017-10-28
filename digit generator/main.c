#include <stdio.h>
#include <stdlib.h>

long int sum (long int n){
                long int sum = 0;
                while(n){
                    sum+=n%10;
                    n/=10;
                }
    return sum;}

int main()
{long int n,i,t,hu;
    scanf("%ld",&t);
    while(t--){scanf("%ld",&n);
    hu = n-63;

    for(i=hu;i<=n;i++){
        if((sum(i)+i)==n){
            break;
        }
    }
    if(i<=n){
    printf("%ld\n",i);}
    else
        printf("0\n");}
    return 0;
}
