#include <stdio.h>
#include <stdlib.h>

int main()
{int i;
 float tution=6000;

    for(i=1;i<=5;i++){
       tution = tution+(tution*.02);

    printf("after %d year your tution fee is %.2f\n",i,tution);}
    return 0;
}
