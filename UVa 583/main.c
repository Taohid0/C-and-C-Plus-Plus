#include <stdio.h>
#include <math.h>

int main()
{long int digit[100],o,k,i,n,j;


    while(1){
        scanf("%ld",&n);
        if(n==0){
            break;
        }
        k=0;
        o=n;

        if(n<0){
            n*=-1;
        }

        for(i=2;i<=n;i++){
            if(n%i==0){
            n/=i;
            digit[k] = i;
            k++;
            i=1;

            }
        }
        if(o<0){
            digit[0]*=-1;

        }printf("%ld = ",o);
        if(o<0){
            printf("-1x");
        }
        if(o==n || o== (-1*n)){
            printf("%ld",o);
        }
      else
        {for(j=0;j<k;j++){
        printf("%ld",digit[j]);
        if(j!=k-1){
            printf("x");
        }}}
        printf("\n");

    }
    return 0;
}
