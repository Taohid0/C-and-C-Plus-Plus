#include <stdio.h>
#include <stdlib.h>

    int rec (int x){
         int f = 1;

         if (x == 1)
            return x;

         else
            f = x * rec(x-1);

         return f;

         }

int main()
{   int x;

    printf("enter a number : \n");
    scanf("%d",&x);

    x = rec(x);

    printf("%d",x);

    return 0;
}
