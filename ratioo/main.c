#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b,c,d;
    float ratio;

    printf("enter four integers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if ((c-d) == 0){
        printf("ratio is infinity");
        exit(0);
}

    ratio = (float)(a-b)/(c-d);

    printf("the ratio is %f",ratio);

    return 0;
}
