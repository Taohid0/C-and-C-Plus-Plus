#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;

    while(true)
    {   int res = 1080;
        cin>>a>>b>>c>>d;
        if(a==0&& b==0&&c==0&&d==0)break;
        int t;
        t = a-b;
        if(t<0)t+=40;
        res+=t*9;

        t  = c-b;
        if(t<0)t+=40;
        res+=t*9;

        t = c-d;
        if(t<0)
        {
            t+=40;
        }
        res+=t*9;
        cout<<res<<endl;

    }
    return 0;
}
