#include <stdio.h>
#include <stdbool.h>

int main()
{   bool digit_seen[10]= {0};
    int digit;
    long n;

    printf("Enter a number : \n");
    scanf("%ld",&n);

    while(n>0){
        digit = n%10;

        if (digit_seen[digit]!=0)
            break;

        digit_seen[digit] = 1;

        n /=10 ;
    }
    if (n>0)
        printf("repeated digit");
    else
        printf("not repeated");

    return 0;
}
