#include <stdio.h>
#include <stdlib.h>

int main()
{int num;

    while(1){
    printf("enter a number\n");
    scanf("%d",&num);

    if(num==0)
        printf("the number is 0\n");
    else if (num<0)
        printf("the number is negative\n");
    else if (num>0)
        printf("the number is positive\n");}

    return 0;
}
