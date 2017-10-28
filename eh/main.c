#include <stdio.h>
#include <conio.h>

int main()
{    int number;
    printf("press a number\n");
    scanf("%d",&number);

    switch(number){
    case 1: printf("you have selected A");
            break;

    case 2:printf("you have selected 2");
           break;

    case 3:printf("you have selected 3");
           break;

    case 4:printf("you have selected 4");
           break;

    default:printf("not good with numbers,eh?");
    }

    getch();

    return 0;
}
