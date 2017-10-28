#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,num1,num2,t,gcd;

    printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);

    a = num1;
    b = num2;

    while(b!=0){
        t = b;
        b = a%b;
        a = t;

    }
    gcd = a;
     printf("GCD of %d and %d is %d",num1,num2,gcd);

    return 0;
}
