#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first,second,third,test=0;
    scanf("%d%d%d",&first,&second,&third);

    if(first+second<=third)
    {
        test = 1;
    }
    else if(first+second<=second)
    {
        test = 1;
    }
    else if(second+third<=first)
    {
        test = 1;
    }
    if(test==1)
        printf("impossible\n");
    else
        printf("possible\n");

    return 0;
}
