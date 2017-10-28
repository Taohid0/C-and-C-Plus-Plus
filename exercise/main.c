//adds two fraction

#include <stdio.h>
#include <stdlib.h>

int main(void)
{int num1,denom1,num2,denom2,resultNum,resultDenom;

    printf("Enter first fraction");
    scanf("%d/%d",&num1,&denom1);

    printf("Enter second fraction");
    scanf("%d/%d",&num2,&denom2);

    resultNum=num1*denom2+num2*denom1;
    resultDenom=denom1*denom2;

    printf("The sum is %d/%d",resultNum,resultDenom);
    return 0;
}
