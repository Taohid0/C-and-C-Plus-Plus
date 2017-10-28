#include <stdio.h>
#include <stdlib.h>

int main()
{int sum=0,num,i;

    printf("enter 10 numbers\n");
    i=1;
    while(i<=10) {
       scanf("%d",&num);
        sum +=num;
        i++;
     printf(" the sum is %d",sum);

    }

    return 0;
}
