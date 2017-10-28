#include <stdio.h>
#include <stdlib.h>

int main()
{  long int t,i,max,min,slot,num,result;

    scanf("%ld",&t);
    while(t--){
        scanf("%ld",&slot);max = -1;
                min = 999999;
        for(i=1;i<=slot;i++){


            scanf("%ld",&num);
            if(num>max){
                max = num;
            }
            if(num<min){
                min = num;
            }}
            result = 2*(max-min);

         printf("%ld\n",result);

    }
    return 0;
}
