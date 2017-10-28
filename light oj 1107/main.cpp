#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c,d,cn,x,y;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        cin>>a>>b>>c>>d;
        if(a>c)swap(a,c);
        if(b>d)swap(b,d);
        cin>>cn;
        cout<<"Case "<<i<<":"<<endl;
        while(cn--)
        {

            cin>>x>>y;
            if(x>=a&&x<=c&&y>=b&&y<=d)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
