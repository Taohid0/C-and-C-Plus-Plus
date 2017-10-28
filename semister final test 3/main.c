#include <stdio.h>
#include <stdbool.h>

int main()
{   int num,digit;
    bool digit_seen[10] = {false};

    printf("Enter a number\n");
    scanf("%d",&num);

    while(num){
        digit  = num%10;
        if(digit_seen[digit]){
            break;
        }
        num/=10;
        digit_seen[digit] = true;
    }
    if(num){
        printf("repeated");
    }
    else
        printf("not repeated");
    return 0;
}
