#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;

    while(1){
        printf("enter a number\n");
        scanf("%d",&n);
        printf("%d cubed is %d\n\n",n,n*n*n);


        if(n ==0)
            break;


    }

    return 0;
}
