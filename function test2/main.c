#include <stdio.h>
#include <stdlib.h>


float getnum(void){
    float num;

    printf("enter a number");
    scanf("%f",&num);
    return num;
    }

int main()
{   float i;

    i = getnum();

    printf("\n%f",i);
    return 0;
}
