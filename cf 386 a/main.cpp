#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,c,ans=0;
    cin>>a>>b>>c;
    for(int i=1;i<=a;i++)
    {
        if(b<2 || c<4)break;
        else
        {
            b-=2;
            c-=4;
            ans+=1+2+4;
        }
    }
    cout<<ans<<endl;
    return 0;
}
