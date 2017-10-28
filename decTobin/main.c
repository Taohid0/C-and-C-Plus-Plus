#include <stdio.h>
#include <stdlib.h>

int main()
{   int remainder,num;
    int bin[100],i=0,j;

    printf("enter a number\n");
    scanf("%d",&num);

    while(num){
        remainder=num%2;
        num/=2;
        bin[i++]=remainder;

    }for(j=i-1;j>=0;j--){

    printf("%d",bin[j]);
    }
    return 0;
}
