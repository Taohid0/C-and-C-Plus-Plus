#include <stdio.h>
#include <stdlib.h>

void count (int n){
        printf("T minus %d is counting\n",n);
        }

int main()
{   int num,i;

    printf("enter a number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
    count (i);
    }

    return 0;
}
