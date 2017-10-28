#include <stdio.h>
#include <stdlib.h>

int main()
{   int num,i,sum=0;

    printf("enter the number\n");
    scanf("%d",&num);

    for (i=1;i<=4;i++){
        sum+=num%10;
        num/=10;
        }

     printf("the sum is %d",sum);

    return 0;
}
