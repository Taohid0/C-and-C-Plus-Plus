#include<bits/stdc++.h>
using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)

#define MOD 1000000007
#define MX 100010

int n, dp[1002][32], val[1002], wgt[1002];

int func(int object, int weight)
{
    if(object==n) return 0;

    int &ret=dp[object][weight];
    if(ret!=-1) return ret;

    ret=func(object+1, weight);
    if(weight>=wgt[object])
        ret=max(ret, val[object]+func(object+1, weight-wgt[object]));
return ret;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int kk=1, tc, m, g, mw;
    string s;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(int i=0;i<n;i++) cin>>val[i]>>wgt[i];

        SET(dp);
        int tot=0;
        cin>>g;
        while(g--)
        {
            cin>>mw;
            tot+=func(0, mw);
        }

        //cout<<"Case "<<kk++<<": "<< <<"\n";
        cout<<tot<<"\n";
    }

    return 0;
}
