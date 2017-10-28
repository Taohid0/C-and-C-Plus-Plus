#include <bits/stdc++.h>

using namespace std;

int rev(int n)
{
    int r = (n%10)*10;
    n/=10;
    r+=n;
    return r;
}

int main()
{
    int t1,m1;
    scanf("%d:%d",&t1,&m1);
    int rt1 = rev(t1);
    if(t1<=5 )
    {
        if(rt1>m1)
        cout<<rt1-m1<<endl;
        else
        {
            cout<<60-m1+1+t1;
        }
    }
    else if(t1>5 and t1<10)
    {
        cout<<(60-m1)+(10-t1)*60;
    }
    else
    {
        if(rt1>=m1)
        {
            cout<<rt1-m1<<endl;
        }
        else
            cout<<60+(t1-m1);
    }
    return 0;
}
