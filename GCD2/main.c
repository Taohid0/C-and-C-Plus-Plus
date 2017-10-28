#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b,t,gcd,lcm,num1,num2;

    printf("enter two numbers : ");
    scanf("%d%d",&num1,&num2);

    a = num1;
    b = num2;

    while(b!=0){
        t = b;
        b = a%b;
        a = t;

    }
    gcd = a;
    lcm = (num1*num2)/gcd;

    printf("the GCD of %d and %d is %d\n",num1,num2,a);
    printf("the LCM of %d and %d is %d",num1,num2,lcm);

    return 0;
}
