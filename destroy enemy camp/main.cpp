#include <bits/stdc++.h>

long int is_prime (long int n)
{
       int i;
       for(i=2;i*i<=n;i++)
       {
           if(n%i==0)
           {
               break;
           }
       }
       if (i*i>=n){
        return 0;
       }
       else
        return 1;
}

int main()
{   long int num,t,i,j;

    scanf("%ld",&t);
    for(j=1;j<=t;j++){
    scanf("%ld",&num);

    for(i=num+1;;i++)
    {
        if(is_prime(i)==0)
        {
            break;
        }
    }
    printf("Case %ld: %ld %ld\n",j,i,i-num);
    }
}
