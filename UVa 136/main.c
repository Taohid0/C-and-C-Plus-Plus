#include <stdio.h>
#include <stdlib.h>

int main()
{long int i,j,k=0;
   for(i=1;i<=999999;i++){
    for(j=2;j*j<=i;j++){
        if(i%j!=0){
            k++;
        }
        if(k==1500){
            printf("%ld",i);
            break;
        }
    }
   }printf("%ld",k);
    return 0;
}
