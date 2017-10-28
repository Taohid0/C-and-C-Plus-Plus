#include <stdio.h>
#include <stdlib.h>

int main()
{   int test,i;
    float c,d,df,cf;

    scanf("%d",&test);

    for(i=1;i<=test;i++){
        scanf("%f%f",&c,&d);
        df = (d*5)/9;
        cf = df+c;
        printf("Case %d: %.2f\n",i,cf);
    }
    return 0;
}
