#include <bits/stdc++.h>


using namespace std;

int main()
{
    vector<string>v;
    int m,n;
    string s;
    cin>>n>>m;
    for(int i = 1;i<=n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    int l1=10000,l2=-1,r1=10000,r2=-1;
    int b=0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(v[i][j]=='B')
            {
                l1 = min(l1,j);
                l2 = max(l2,j);
                r1 = min(r1,i);
                r2  = max(r2,i);
                b++;
            }
        }
    }
    int d1= l2-l1+1;
    int d2 =r2-r1+1;
    //cout<<d1<<" "<<d2<<endl;
    int dist =abs(d1-d2);
    if(b==0)
    {
        cout<<1<<endl;
        return 0;
    }
    if(d1>d2 and dist+d2>n)
    {
        cout<<-1<<endl;
        return 0;
    }
    else if(d2>d1 and dist+d1>m)
    {
        cout<<-1<<endl;
        return 0;
    }
    int ans = 0;
    if(d1<d2)
    {
        ans=d2*d2-b;
    }

    else
        ans = d1*d1-b;
    cout<<ans<<endl;
    //cout<<l1<<" "<<l2<<" "<<r1<<" "<<r2<<endl;
    return 0;
}
