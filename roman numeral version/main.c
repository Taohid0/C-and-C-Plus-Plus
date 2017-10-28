#include <stdio.h>
#include <conio.h>

int main()
{int press;

    printf("press from 1-5\n");
    scanf("%d",&press);

    switch(press){
           case 1:printf("Roman numeral version of 1 is I");
                  break;
           case 2:printf("Roman numeral version of 2 is II");
                  break;
           case 3:printf("Roman numeral version of 3 is III");
                  break;
           case 4:printf("Roman numeral version of 4 is IV ");
                  break;
           case 5:printf("Roman numeral version of 5 is V");
                  break;
           default:printf("tou have presed in invalid number");
                   break;
                  }
                  getch();
    return 0;
}
