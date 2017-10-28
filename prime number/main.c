#include <stdio.h>
#include <stdlib.h>

int main()
{int d,n;
    printf("enter a number\n");
    scanf("%d",&n);

    for(d=2;n>d;d++)
        if(n % d==0)
         break;
    if(d<n)
        printf("%d is divisible by %d",n,d);
    else
        printf("%d is a prime number",n);

    return 0;
}
