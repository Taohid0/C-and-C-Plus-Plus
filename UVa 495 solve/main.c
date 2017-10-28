
#include<stdio.h>
int main()
{

    long f2,f0,f1,n,i;
    while(scanf("%ld",&n)!=EOF)
    {
        f0=0;
        f1=1;
    for(i=1;i<=n;i++)
    {
        f2=f0+f1;
        f1=f0;
        f0=f2;
    }
      printf("The Fibonaci number for %ld is %ld\n",n,f2);
    }
    return 0;
}
