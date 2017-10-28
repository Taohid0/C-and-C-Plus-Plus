#include <stdio.h>
#include <stdlib.h>

int main()
{int i,num;

    printf("enter a number\n");
    scanf("%d",&num);

    for(i=2;i>num;i++){
       if(num % i == 0)
         break;
    } if (i<num)
       printf("the number is divisible by %d",i);
    else
        printf("%d is a prime number",num);

    return 0;
}
