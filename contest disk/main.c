#include <stdio.h>
#include <stdlib.h>

int main()
{long long int n1,n2,num1[1000000],i,j,num2[1000000],count;
    while(1){
    scanf("%lld%lld",&n1,&n2);
    if(n1==0 && n2 == 0){
        break;
    }
    count = 0;
    for(i=0;i<n1;i++){
        scanf("%lld",&num1[i]);
    }
    for(j=0;j<n2;j++){
        scanf("%lld",&num2[j]);
    }
    if(n1>n2){
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(num1[i]==num2[j]){
                count++;
            }
        }
    }}
   else {for(i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            if(num1[i]==num2[j]){
                count++;
            }
        }
    }}

    printf("%lld\n",count);}

    return 0;
}
