#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,result=1;

    printf("enter a nonnegative integer\n");
    scanf("%d",&num);

    for(i=1; i<=num; num++)
    {
        result*=num;
    }
    printf("%d is the factorial of %d",result,num);
    return 0;
}
