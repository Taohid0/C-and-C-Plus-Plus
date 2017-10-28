#include <stdio.h>

int main()
{  int n;
    while(scanf("%d",&n)==1&&n!=0)
    {
        if(n <= 101)
        printf("f91(%d) = 91\n",n);
        else
        printf("f91(%d) = %d\n",n,n-10);
    }
    return 0;
}
