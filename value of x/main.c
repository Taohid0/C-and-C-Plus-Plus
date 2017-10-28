#include <stdio.h>
#include <stdlib.h>

int main()
{int result,x;
    printf("entre the value of X\n");
    scanf("%d",&x);
    result=5*(x*x*x*x*x*x)+2*(x*x*x*x*x)-5*(x*x*x)-(x*x)+7*x-6;
    printf("your result is %d",result);
    return 0;
}
