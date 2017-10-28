#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1,num2,num3,result;

    printf("enter theree numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1<num2){
        if (num2<num3){
                result= num3;
        }
        else
            result = num2;
    }
    else{
        if (num1<num3){
            result = num3;
        }
        else
            result = num1;
    }
    printf("%d",result);

    return 0;
}
