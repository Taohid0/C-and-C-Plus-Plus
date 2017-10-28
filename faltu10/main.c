#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{float num;
    while(1){
    printf("enter a number\n");
    scanf("%f",&num);
    if(num<0)
        printf("invalid number\n");
     else
    printf("%f\n",sqrt(num));
    }
    return 0;
}
