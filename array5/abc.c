# include <stdio.h>
# define MAXROW 5
# define MAXCOLUMNS 5

int main ()
{   int row,column,result[MAXROW][MAXCOLUMNS];
    int i,j;

    printf(" MULTIPLICATION TABLE \n\n");

    for(i=1;i<=MAXCOLUMNS;i++){
        printf(" %4d",i);
    }
    printf("\n------------------------\n");

    for(j=1;j<=MAXROW;j++){
        printf("%d\n",j);
        row=j;

    for(j=1;j<=MAXCOLUMNS;j++){
            column=i;
        result[i][j]=row*column;

        printf("%4d",result[i][j]);
        }

    printf("\n");
    }

   return 0;

}
