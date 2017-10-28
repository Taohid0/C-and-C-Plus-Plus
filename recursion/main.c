#include <stdio.h>
#include <stdlib.h>

int sum (int n){
        int sum1 = 0;

        if (n==0)
          return n;

        sum1 = n+sum(n-1);

        return sum1;
        }

int main()
{   int b,num;

    printf("enter a number\n");
    scanf("%d",&num);
    b = sum(num);

    printf("%d",b);

    return 0;
}
