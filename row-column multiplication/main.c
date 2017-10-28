#include <stdio.h>
#include <stdlib.h>
#define COLMAX 10
#define ROWMAX 12

int main()
{int row,column,result;
    printf("             MULTIPLICATION TABLE          \n");

    printf("------------------------------------------------");
    row=1;

    do{
        column = 1;
        do{result = row*column;
          printf("%4d",result);
          column=column+1;}while(column>=COLMAX);

    printf("\n");
    row=row+1;}while(row<=ROWMAX);
    printf("------------------------------------------------\n");

    return 0;
}
