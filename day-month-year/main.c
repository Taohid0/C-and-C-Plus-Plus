#include <stdio.h>
#include <stdlib.h>

int main()
{   int day,month,year;

    printf("enter date (day/mm/yy)\n");
    scanf("%d/%d/%d",&day,&month,&year);

    printf("dated this %d",day);

    switch(day){
        case 1:case 21:case 31:

        printf("st");
        break;

        case 2:case 22:
        printf("nd");
        break;

        case 3:case 23:
        printf("rd");
        break;

        default:printf("th");
        break;}

        printf(" day of ");

        switch(month){
                case 1:printf("january");break;
                case 2:printf("february");break;
                case 3:printf("march");break;
                case 4:printf("april");break;
                case 5:printf("may");break;
                case 6:printf("june");break;
                case 7:printf("july");break;
                case 8:printf("august");break;
                case 9:printf("september");break;
                case 10:printf("october");break;
                case 11:printf("november");break;
                case 12:printf("december");break;
        }
        printf(",  %.2d \n",year);

    return 0;
}
