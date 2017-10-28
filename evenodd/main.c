#include <stdio.h>
#include <stdlib.h>

int main()
{   int number;

    printf("give an integer number\n");
    scanf("%d",&number);

    if(number % 2 !=0){
            printf("the number is an odd number");
    }
    else
        printf("the number is an even number");

    return 0;
}
