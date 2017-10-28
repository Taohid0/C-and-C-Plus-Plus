#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{int num,i;

    printf("enter a number\n");
    scanf("%d",&num);

    for (i=1;i<=num;i++){


         if (i%2==0){
            if(i*i<=num)
            printf("%5d",i*i);}}
return 0;
}
