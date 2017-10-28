#include <bits/stdc++.h>

long bigmod(long b,long p,long m);

int main()
{  int b,p,m,result;

    while(scanf("%d%d%d",&b,&p,&m)==3){
    result = bigmod(b,p,m);
    printf("%d\n",result);}
    return 0;
}
long bigmod(long b,long p,long m){
             if(p==0)return 1;

             if(p%2==1){
                return ((b%m)*bigmod(b,p-1,m))%m;
             }
             else
                return (bigmod(b,p/2,m)*bigmod(b,p/2,m))%m;}
