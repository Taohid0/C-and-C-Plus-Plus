#include<bits/stdc++.h>
using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)

#define MOD 1000000007
#define MX 100010

vector<int>adj[105];
bool vis[105], ans[105][105], visOrg[105];
int skip;

void dfs(int u)
{
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!vis[v] && v!=skip)
            dfs(v);
    }
return;
}

void dfsOrg(int u)
{
    visOrg[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!visOrg[v])
            dfsOrg(v);
    }
return;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int kk=1, tc, n, m, x;
    string s;
    cin>>tc;
    while(tc--)
    {
        cin>>n;


        for(int i=0;i<n;i++)   adj[i].clear();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>x;
                if(x) adj[i].push_back(j);
            }
        }



        CLR(ans);

        CLR(visOrg);
        dfsOrg(0);
        for(int i=0;i<n;i++)
            if(visOrg[i])
                ans[0][i]=true;

        for(int i=1;i<n;i++)
        {
            skip=i;
            CLR(vis);
            dfs(0);
            for(int j=0;j<n;j++)
                if((!vis[j] && visOrg[j]))
                    ans[i][j]=true;

        }



        cout<<"Case "<<kk++<<":\n";
        for(int i=0;i<=n*2;i++)
        {
            if(i%2==0)
            {
                cout<<"+";
                for(int j=0;j<n+n-1;j++)
                    cout<<"-";
                cout<<"+";
            }
            else
            {
                cout<<"|";
                for(int j=0;j<n;j++)
                {

                    if(ans[i/2][j]) cout<<"Y";
                    else cout<<"N";
                    cout<<"|";
                }
            }
            cout<<"\n";

        }
    }

    return 0;
}
