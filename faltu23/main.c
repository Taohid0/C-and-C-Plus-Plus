#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i=1,j=5;i<=10;++i,i+j)
    printf("%10d%10d\n",i,i+j);
    return 0;
}
