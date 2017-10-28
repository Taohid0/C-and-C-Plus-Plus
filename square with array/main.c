#include <stdio.h>
#include <stdlib.h>

int main()
{   int num[10];
    int i;

    for(i=0;i<10;i++){
        num[i] = i*i;}

    for(i=0;i<10;i++){
    printf("  %d",num[i]);
    }
    return 0;
}
