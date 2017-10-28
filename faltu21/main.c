#include <stdio.h>
#include <stdlib.h>

int main()
{int number;

    printf("enter a positive number\n");
    scanf("%d",&number);

    while(1){
    if(number%3==0 || number%9==0){
        printf("the number is divisible by 3 or 9");
        scanf("%d",&number);}
        else
             printf("the number is not divisible by 3 or 9\n");
             scanf("%d",&number);
             }


    return 0;
}
