#include <stdio.h>
#include <math.h>

int main()
{int i,num,remainder,sum=0;

    printf("enter a digit\n");
    scanf("%d",&num);

    for(i=1;i<=num;i++){

        remainder=num%10;
        num=num/10;
        sum+=remainder*pow(-1,i);
        printf(" %d",remainder);

    } if(sum%11==0)
    printf("\nthe number is divisible by 11\n");
    else
        printf("the number is not divisible by 11\n");
    return 0;
}
