#include <stdio.h>
#include <stdlib.h>

int main()
{int sum=1,i,num;
 float result=1;

    scanf("%d",&num);

    for(i=1;i<=num;i++){
        sum*=i;


        result+=(1/(float)sum);
    }printf("the result is %f",result);

  return 0;
}

