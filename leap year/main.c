#include <stdio.h>
#include <stdlib.h>

int main()
{   int year;

    printf("please enter a year\n");
    scanf("%d",&year);

    if ((year % 4)==0 && (year % 100) !=0)
        printf("\n %d is a leap year",year);
    else
        printf(" \n%d is not a leap year",year);

    return 0;
}
