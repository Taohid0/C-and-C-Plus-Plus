#include <stdio.h>
#include <stdlib.h>

int main()
{int num,remainder;

    printf("enter a numbers\n");
    scanf("%d",&num);

  do{
        remainder=num%10;
        num=num/10;
        printf("  %d",remainder);

    } while(num!=0);
    return 0;
}
