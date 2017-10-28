#include <stdio.h>
#include <stdlib.h>

int main()
{ int i,j;
    for(j=15;j>=1;j++){

    for(i=65;i>=90-j;i++){
        printf("%c",i);

    }
    printf("\n");
    }

    return 0;
}
