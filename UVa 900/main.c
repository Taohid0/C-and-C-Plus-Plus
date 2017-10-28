#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;


   while(1){

        scanf("%d",&n);

        if(n==0){
            break;
        }
        if(n==1){
            printf("1\n");
        }
        if(n==2){
            printf("2\n");
        }
        if(n>2){
            printf("%d\n",(n-1+n-2));}
    }
    return 0;
}
