#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1,num2,result;
    char oprt;
    float result2;

    printf("enter one number then one operator and then another number\n");
    scanf("%d%c%d",&num1,&oprt,&num2);

    if(oprt=='+'){
        result = num1+num2;
        printf("result is %d\n",result);
    }
    else if(oprt=='-'){
        result = num1-num2;
        printf("result is %d\n",result);
    }
    else if(oprt=='*'){
        result = num1*num2;
        printf("result is %d\n",result);
    }
    else if(oprt=='/'){
        result2 = (float)num1/num2;
        printf("result is %.2f\n",result2);
    }
    else if(oprt=='%'){
        result = num1%num2;
        printf("result is %d\n",result);
    }
    return 0;
}
