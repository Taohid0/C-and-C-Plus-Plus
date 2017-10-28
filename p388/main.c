#include <stdio.h>
#include <stdlib.h>

int main()
{
   do{
          printf("Are tou sure want to quit?\n");
          getchar();
          }while(getchar() == 'Y' || getchar() == 'y');

    return 0;
}
