#include <stdio.h>
#include <stdlib.h>

int main()
{int num1,num2,sum=0;


   do{ printf("enter 2 numbers\n");
    scanf("%d%d",&num1,&num2);

    sum = num1+num2;

    printf("the sum is %d \n",sum);
    printf("do you want to perform this operation again?\n");

    }while(getchar()!='y' || getchar()!='Y');

    return 0;
}
