#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
typedef int bool;

bool is_prime (int n){
        int i;
        if(n<=1){
            return false;
        }
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                return false;}}

        return true;
        }

int main()
{int num;
    printf("enter a number\n");
    scanf("%d",&num);

    if(is_prime(num)){
        printf("prime");
    }
    else
        printf("not prime");
    return 0;
}
