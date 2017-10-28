#include <stdio.h>
#include <stdlib.h>

  int add (int num){
      int sum=0,i;

      for(i=1;i<=num;i++){
        sum+=i;
     return sum ;

      }

int main()
{
    printf("enter number\n");
    scanf("%d",&num);

    add(num);

    printf("%d",sum);

    return 0;
}
