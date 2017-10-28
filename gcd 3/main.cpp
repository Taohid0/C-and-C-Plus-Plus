#include <bits/stdc++.h>

int main()
{   int num1,num2,a,b,t;

    printf("enter two numbers :");
    scanf("%d%d",&num1,&num2);
    a = num1;
    b = num2;

    while(b!=0){
        t = b;
        b = a%b;
        a = t;
    }

    printf("gcd is %d ",a);
    return 0;
}
