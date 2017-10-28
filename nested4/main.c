#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,j;

    for(j=70;j>=65;j--){

    for(i=70;i>=j;i--){
        printf("%c",i);
    }
        printf("\n");
    }
    return 0;
}
