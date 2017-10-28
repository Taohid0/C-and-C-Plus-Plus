#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={0};
    int num, d, i;

    scanf("%d", &num);

    while( num )
    {
        d = num % 10;
        num = num / 10;

        a[d] = a[d]++;
    }

    for ( i=0;i<10;i++ )
    {
        if( a[i] > 1 )
            printf("%d is repeated ", i );
    }

    return 0;
}


