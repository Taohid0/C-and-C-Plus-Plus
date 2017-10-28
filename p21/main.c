#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{ int num,digit=0;

    printf("enter an integer number\n");
    scanf("%d",&num);

   do {
    digit = num/10;
    digit++;
   } while (num>0);
   printf("the number has %d digits",digit);

    getch();

    return 0;
}
