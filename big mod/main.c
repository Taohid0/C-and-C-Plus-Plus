#include <stdio.h>

int mod(long b, long power, long m)
{
    if(power==0)
        return 1;
    if(power%2==0)
        return (mod(b,power/2,m)*mod(b,power/2,m))%m;
    return (mod(b,power-1,m)*(b%m))%m;
}
int main()
{
    int b,power,m;
    while(scanf("%d %d %d",&b,&power,&m)==3){
        printf("%d\n",mod(b,power,m));
    }
    return 0;
}
