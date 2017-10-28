#include <stdio.h>
#include <stdlib.h>

int main()
{   int days,year,month,remainingDays;

    printf("Enter number of days\n");
    scanf("%d",&days);

    year = days/365;
    month = (days-(year*365))/30;
    remainingDays =  (days-(year*365)-(month*30));

    printf("year = %d\nmonth = %d\nremaining days = %d",year,month,remainingDays);

    return 0;
}
