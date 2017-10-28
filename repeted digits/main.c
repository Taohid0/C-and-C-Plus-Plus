#include <stdio.h>
#include <stdbool.h>

int main()
{   bool digit_seen[10]={false};
    int digit,n;

    printf("enter a number\n");
    scanf("%d",&n);

    while(n>0){
        digit=n%10;
        if (digit_seen[digit])
            break;
        digit_seen[digit]= true;
        n/=10;
    }
    if(n>0)
        printf("repeted");
    else
        printf("not repeted");

    return 0;
}
