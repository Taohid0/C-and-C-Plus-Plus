#include <stdio.h>
#include <stdbool.h>

bool is_prime (int n){
        int divisor;

        if (n<=1)
            return false;

        for(divisor=2;divisor*divisor<=n;divisor++)
            if(n%divisor==0)
               return false;

            return true;}

int main()
{   int num;

    printf("enter a numbers : ");
    scanf("%d",&num);

    if(is_prime(num))
        printf("the number is prime.");
    else
        printf("the number is not prime.");

    return 0;
}
