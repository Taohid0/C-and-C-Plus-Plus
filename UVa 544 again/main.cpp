#include <bits/stdc++.h>

using namespace std;

#define inf -1

using namespace std;

int main()
{
    int n,e,i,j,k,c,tag,cs=1;
    string s1,s2;
    while(scanf("%d %d",&n,&e)==2)
    {
        if(n==0 && e==0)
            return 0;
        map<string,int>mps;
        tag=1;
        int dist[203][203];
        for(i=1; i<=n; i++)
            for(j=1; j<=n; j++)
            {
                dist[i][j]=inf;
                if(i==j)
                    dist[i][j]=0;
            }
        for(i=1; i<=e; i++)
        {
            cin>>s1>>s2>>c;
            if(mps[s1]==0)
                mps[s1]=tag++;
            if(mps[s2]==0)
                mps[s2]=tag++;
            dist[mps[s1]][mps[s2]]=c;
            dist[mps[s2]][mps[s1]]=c;

        }
        for(k=1; k<=n; k++)
            for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                    dist[i][j]=max(dist[i][j],min(dist[i][k],dist[k][j]));
        cin>>s1>>s2;
        printf("Scenario #%d\n%d tons\n\n",cs++,dist[mps[s1]][mps[s2]]);

    }

    return 0;
}
