#include <stdio.h>
#include <stdlib.h>



int main()
{   long int t,num[2000009],i,k,j,temp;
    while(1){scanf("%ld",&t);
         if(t==0){
        break;
             }
    for(i=0;i<t;i++){
            scanf("%ld",&num[i]);}

        for(i=0;i<t;i++){
        for(k=0;k<t-1;k++){
           if(num[k]>num[k+1]){
            temp = num[k];
            num[k] = num[k+1];
            num[k+1] = temp;
        }

    }}
    for(j=0;j<t;j++){
        printf("%ld ",num[j]);
    }
    printf("\n");}
    return 0;
}
