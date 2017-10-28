#include <stdio.h>
#include <stdlib.h>

int main()
{   int number;

    printf("enter a number\n");
    scanf("%d",&number);

    if(number%2==00){
        printf("%d is divided by 2\n",number);
    }
    if(number%3 ==0 ){
        printf("%d is divided by 3\n",number);
    }
    if(number%5==0){
        printf("%d is divided by 5\n",number);}
    return 0;
}
