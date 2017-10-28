#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j,multi[5][5];

    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
                multi[i][j] = i*j;

        }
    }
    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
                printf(" %d",multi[i][j]);}
         printf("\n");
        }
    return 1;
}
