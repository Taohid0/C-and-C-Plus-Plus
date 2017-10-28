#include <stdio.h>
#include <stdlib.h>

int main()
{   long int a,b,i,count;

     while(1){
            count = 0;

         scanf("%ld%ld",&a,&b);

        if(a==0 && b ==0){
             break;
          }
        if(a<b){
           for(i=1;i<=b;i++){
            if(i*i<=b && i*i>=a){
                count++;
            }}}

        else
          for(i=1;i<=a;i++){
            if(i*i<=a && i*i>=b){
                count++;
            }
        }
            printf("%ld\n",count);


    }

    return 0;
}
