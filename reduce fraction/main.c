#include <stdio.h>
#include <stdlib.h>

int main()
{ int num1,num2,gcd,a,b,t;

    printf("enter a fraction number\n");
    scanf("%d%d",&num1,&num2);

    a = num1;
    b = num2;

    while(a!=0){
          t = a;
          a = b % a;
          b = t;
          }

    gcd = b;
    printf("%d/%d",num1/gcd,num2/gcd);

    return 0;
}
