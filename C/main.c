#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,n3,n2,i,t;

    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        if(n<11){
        printf("0 %d\n",n);
    }
    else{
    n2 = n-10;
    n3 = n-n2;
    printf("%d %d\n",n3,n2);
    }}
    return 0;
}
