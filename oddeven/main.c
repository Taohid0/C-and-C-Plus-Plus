#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;

    printf("enter an integer number\n");
    scanf("%d",&n);

    if ((n % 2) == 0)
        printf("you entered and even number");

    else
        printf("you entered an odd number");

    return 0;
}
