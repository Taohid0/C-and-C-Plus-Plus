#include <stdio.h>
#include <stdlib.h>

    void add (int num){
      int sum=0,i;

      for(i=1;i<=num;i++){
        sum+=i;
       printf("%d",sum);

      }

   void main(void)
  { int num;

    printf("how many numbers?\n");
    scanf("%d",&num);

    add (num);}




