#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin>>test;
    int h1,m1,h2,m2,h3,m3,h4,m4;

    for(int i = 1;i<=test;i++){

    scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2) ; int a = (h1*60)+m1;
    int b = (h2*60)+m2;
    scanf("%d:%d %d:%d",&h3,&m3,&h4,&m4) ;


    int c = (h3*60)+m3;
    int d = (h4*60)+m4;

    if(c>b || a>d){
        printf("Case %d: Hits Meeting\n",i);
    }
        else
            printf("Case %d: Mrs Meeting\n",i);
    }
    return 0;
}
