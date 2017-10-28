#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,value;
    cin>>n>>a>>b;
    int ans = 0;
    while(n--)
    {
        cin>>value;
        if(value==1)
        {
            if(a>0)
            {
                a--;
            }
            else if(b>0)
            {
                b--;
                a++;
            }
            else
                ans++;
        }
        else
        {
            if(b>0)
                b--;
            else
                ans+=2;
        }

    }cout<<ans<<endl;
    return 0;
}
