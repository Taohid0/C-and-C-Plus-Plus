#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{int count3,count=0,num,count2,j,remainder;

    printf("enter a number/n");
    scanf("%d",&num);

    do{

       num=num/10;
       count++;
     }while(num!=0);

      count3=count-1;

      count2=pow(10,count3);

   for(j=count2;j>=count;j/=10){

       remainder=num/j;


       printf("%d",remainder);

   }
    return 0;
}
