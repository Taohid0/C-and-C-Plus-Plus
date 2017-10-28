#include <stdio.h>
#include <stdlib.h>

int main()
{long int i,j,k=1498,o;
    for(i=3;i<=999999999999;i++){
        for(j=2;j*j<i-1;j++){
            if(i%j==0){
                break;
            } }

        if(j*j>=i){
          k++;
          o = i;}
          if(k==1498){
            break;
          }}


           printf("%ld",i);

    return 0;
}
