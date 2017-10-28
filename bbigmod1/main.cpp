#include <bits/stdc++.h>

int bigmod (int b,int p,int m);

int main()
{   int base,power,mod,result;

    printf("enter base\n");
    scanf("%d",&base);

    printf("enter power\n");
    scanf("%d",&power);

    printf("enter mod\n");
    scanf("%d",&mod);

    result= bigmod(base,power,mod);

     printf("%d",result);
    return 0;
}

int bigmod (int b,int p,int m){

                if(p==0)return 1;

                if(p%2==1){
                    return ((b%m)*bigmod(b,p-1,m))%m;
                }
                else
                    return (bigmod(b,p/2,m)*bigmod(b,p/2,m))%m;
}
