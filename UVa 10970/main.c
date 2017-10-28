#include <stdio.h>
#include <stdlib.h>

int main()
{   long int row,column;

    while(scanf("%ld%ld",&row,&column)!=EOF){

        printf("%ld\n",row*column-1);
    }
    return 0;
}
