#include <stdio.h>
#include <stdlib.h>

int main()
{
   long int num,remainder,k=1,i,p,m=10;

    for(i=1;i<=11111;i+=k){

        for(p=m;p>=1;p--){
           printf(" ");
           }

            m-=2;
            num=i*i;
            k*=10;

   while(num){
     remainder=num%10;
     num/=10;
     printf(" %ld",remainder);


   } printf("\n");
   }

    //for lower half
    k=1000;
    m=4;
    for(i=1111;i>=1;i/=k){

        for(p=m;p>=1;p--){
           printf(" ");}
            k/=10;

           m+=2;
           num=i*i;
            while(num){
     remainder=num%10;
     num/=10;
     printf(" %ld",remainder);


   } printf("\n");}


    return 0;
}
