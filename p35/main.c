#include <stdio.h>
#include <stdlib.h>

int main()
{   float sum=0;
    int i,j;

    for(i=1,j=30;i<=30 && j>=1;i++,j--){

       sum+=(float)i/j;}

    printf("%f\n",sum);
    return 0;
}
