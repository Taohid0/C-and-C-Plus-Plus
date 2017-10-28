#include <stdio.h>
#include <stdlib.h>

int main()
{   int num,i,count = 0;

   scanf("%d",&num);

    for(i=;i<=num;i++){
        if(num%i==0){
                count++;
    }}
    printf("%d\n",count);

    return 0;
}
