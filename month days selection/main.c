#include <stdio.h>
#include <conio.h>

int main()
{int press;

    printf("press 1 , 2 or 3\n");
    scanf("%d",&press);

    switch(press){
           case 1:printf("January has 31 days");
                  break;
           case 2:printf("February has 28 days");
                  break;
           case 3:printf("March has 31 days");
                  break;
           default:printf("invalid selection");
                   break;
                   }

                   getche();

    return 0;
}
