#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,num1,num2,sumEven=0,sumOdd=0,sumE=0,sumO=0;

    printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);

    printf("the even numbers are : ");

    for(i=num1;i<=num2;i++){
        if(i%2==0){
            printf("  %d",i);
            sumEven+=i;
            sumE+=i*i;}
    }
    printf("\nsum of all even numbers is %d and %d",sumEven,sumE);

    printf("\n\nthe odd numbers are : ");

    for(j=num1;j<=num2;j++){
        if(j%2!=0){
            printf("  %d",j);
            sumOdd+=j;\
            sumO+=j*j;}
    }
    printf("\nsum of all add numbers is %d    %d",sumOdd,sumO);

    return 0;
}
