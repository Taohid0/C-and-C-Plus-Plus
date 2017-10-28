#include <stdio.h>
#include <stdlib.h>

int main()
{int row,column,y,colNum,rowNum;

    printf("enter row and column number\n");
    scanf("%d%d",&rowNum,&colNum);

    printf("          MULTIPLICATION TABLE      \n");
    printf("----------------------------------------\n");
    row=1;
    do {column=1;

       do{
        y=row*column;
        printf("%4d",y);
        column++;
       }while(column<=colNum);
        printf("\n");
        row++;

        }while(row<=rowNum);
        printf("----------------------------------------");

    return 0;
}
