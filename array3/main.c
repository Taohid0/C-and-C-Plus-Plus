#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{   int a[N],i;

    printf(" enter 10 numbers : \n");

    for(i=0;i<N;i++){
        scanf("%d",&a[i]);}

    for(i=N-1;i>=0;i--){
        printf("  %d",a[i]);
    }
    return 0;
}
