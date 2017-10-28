#include <stdio.h>
#include <string.h>

int main()
{   int t,len,sum,i;
    char lock[1000];

    scanf("%d\n",&t);
    while(t--){

        gets(lock);
        len = strlen(lock);
        sum = 0;

        for(i=0;i<len;i++){
            if(lock[i]=='M'){
                sum+=1;}

         if(lock[i]=='F'){
            sum-=1;
         }}
         if(sum==0 && len>2){
            printf("LOOP\n");
         }
         else
            printf("NO LOOP\n");
        }

    return 0;
}
