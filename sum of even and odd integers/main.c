#include <stdio.h>
#include <stdlib.h>

int main()
{int num,even=0,odd=0;

    printf("enters numbers to calculate.press 0 to stop\n");

    do{
        scanf("%d",&num);
         if (num%2==0)
            even+=num;
         else if(num%2!=0)
            odd+=num;
    }while(num!=0);
    printf("the sum of even numbers is %d \nand the sum of odd numbers is %d",even,odd);

    return 0;
}
