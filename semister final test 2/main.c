#include <stdio.h>
#include <stdlib.h>

void write (int n){
        printf("now it is %d\n",n);
        }

int main()
{   int i,num;

    printf("enter a number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        write(i);
    }
    return 0;
}
