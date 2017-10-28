#include <bits/stdc++.h>

int mod (int b,int p,int d)
{
    if(p==0){
        return 1;
    }
    if(p%2==0){
        return (mod(b,p/2,d)*mod(b,p/2,d))%d;
    }
    return (mod(b,p-1,d)*(b%d))%d;
}

int main()
{   int base,power,divider,result;

    printf("enter base,power and devider : ");
    scanf("%d%d%d",&base,&power,&divider);
    result  = mod(base,power,divider);
    printf("%d",result);

    return 0;
}
