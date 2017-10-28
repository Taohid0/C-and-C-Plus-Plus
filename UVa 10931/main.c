#include <stdio.h>
#include <stdlib.h>

int main()
{   long int digit[50],i,m,j,k,n;

    while(1){
        scanf("%ld",&n);
        i = 0;
        j=0;
        m = 0;

        if(n==0){
            break;
        }
        while(n!=0){
            digit[m] = n%2;
            if(n%2 == 1){
               i++;
                } m++;
                n/=2;
                j++;
        }
        printf("The parity of ");
        for(k=m-1;k>=0;k--){
            printf("%ld",digit[k]);
        }
        printf(" is %ld (mod 2).\n",i);
    }
    return 0;
}
