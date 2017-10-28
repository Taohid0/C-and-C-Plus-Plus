#include <stdio.h>
#include <stdlib.h>

int main()
{int i,n;

    printf("enter a number\n");
    scanf("%d",&n);
    for(i=2;i<n;i++){
            if(n%i==0){
            break;
    }


    }
    if(i>=n)
         printf("the number is prime  ");
    else
        printf("the number is not prime %d",i);
    return 0;
}
