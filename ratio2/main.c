#include <stdio.h>
#include <stdlib.h>

int main()
{    int a,b,c,d;
     float ratio;

    printf("give four integer numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if((b-c)==0){
        printf("the ratio is infinity");
        exit(0);
    }
    ratio = (float)(a-b)/(c-d);

    printf("the ratio is %f",ratio);

    return 0;
}
