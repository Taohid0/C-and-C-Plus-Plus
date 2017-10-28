#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i;
    scanf("%d%d",&n1,&n2);
    if(n1%2==1)
    {
        n1 = n1+1;
    }

    for(i =n1;i<=n2;i=i+2)
    {
        printf("%d ",i);
    }
    return 0;
}
