#include <stdio.h>
//#include <stdbool.h>

#define true 1
#define false 0
typedef int bool;

int main()
{   //bool digit_seen[10];
    int digit,n;
    while(1){printf("enter a number : \n");
    scanf("%d",&n);
    bool digit_seen[10] = {false};

    while(n>0){
        digit = n%10;

        if(digit_seen[digit]){
            break;
        }
        digit_seen[digit] = true;
        n/=10;
    }
    if(n>0){
        printf("repeated digits\n");
    }
    else
        printf("not repeated\n");}
    return 0;
}
