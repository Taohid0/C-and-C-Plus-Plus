#include <bits/stdc++.h>

int main()
{   int num,i;
    printf("enter a number  : ");
    scanf("%d",&num);

    for(i = 2;i*i<=num;i++){
        if(num%i==0){
            break;
        }
    }
    if(i*i>=num){
        printf("the number is prime");
    }
    else
        printf("the number is not prime");

    return 0;
}
