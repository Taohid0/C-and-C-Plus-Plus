#include <stdio.h>
#include <stdlib.h>

int main()
{int sum=0,i;
    for ( i=0;i<=100;i++){
        sum = sum + (i*i);
    }
    printf("%d",sum);
    return 0;
}
