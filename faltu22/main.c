#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i=1;

    printf("number\n");
    scanf("%d",&n);


    while(i<=10){
    printf("%d X %d = %d\n",i,n,i*n);
    i++;}

    return 0;
}
