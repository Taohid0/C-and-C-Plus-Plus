#include <stdio.h>
#include <conio.h>

int main()
{int day,month,year;

    printf("give date in numeric form\n");
    scanf("%d%d%d",&day,&month,&year);

    if (day*month==year)
        printf("the date is magic");
    else
        printf("the date is not magic");
    getch();

    return 0;
}
