#include <stdio.h>
#include <stdlib.h>

int fact (int n){
    int result;
        if(n<=1){
            return 1;}
        result = n*fact(n-1);
        return result;
        }


int main()
{int num;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("\n%d",fact(num));

    return 0;
}
