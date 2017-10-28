#include <stdio.h>


int main()
{   int year;

    printf("please enter a year\n");
    scanf("%d",&year);

    if ((year % 4 == 0 ) && (year % 100 != 0))
        printf("the year is a leap year");

    else
        printf("the year not a leap year");

    return 0;
}
