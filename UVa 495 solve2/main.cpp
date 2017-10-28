
#include<stdio.h>
int main()
{
    int f0,f1,n,i;
   unsigned long f2;
    while(scanf("%d",&n)!=EOF)
    {
        f0=0;
        f1=1;
    for(i=1;i<=n;i++)
    {
        f2=f0+f1;
        f1=f0;
        f0=f2;
    }
      printf("The Fibonacci number for %d is %u\n",n,f2);
    }
    return 0;
}
