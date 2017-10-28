#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<iostream>
#include<algorithm>
#define inf 1<<29
#define sz 28

using namespace std;
int n;

struct dt
{
    int n,d;
    dt(int a,int b)
    {
        n=a;
        d=b;
    }
};
vector<dt>ans;

int comp(dt a,dt b)
{
    if(a.d==b.d)
        return a.n<b.n;
    else return a.d<b.d;
}
void init(int dist[][sz])
{
    int i,j;

    for(i=1; i<sz; i++)
    {
        for(j=1; j<sz; j++)
        {
            dist[i][j]=inf;
            if(i==j)
                dist[i][j]=0;
        }
    }
}
void floyed_warshal(int dist[][sz])
{
    int i,j,k;
    for(k=1; k<sz; k++)
        for(i=1; i<sz; i++)
            for(j=1; j<sz; j++)
                if(dist[i][j]>dist[i][k]+dist[k][j])
                    dist[i][j]=dist[i][k]+dist[k][j];


}
int main()
{
  //freopen("in.txt","r",stdin);
    int i,j,w;
    int SMD[sz][sz],MGD[sz][sz];
    char a,d,x,y;
    while(cin>>n)
    {
        if(n==0)
            break;
        init(SMD);
        init(MGD);
        ans.clear();
        for(i=1; i<=n; i++)
        {
            cin>>a>>d>>x>>y>>w;

            if(a=='Y')
            {
                if(SMD[x-64][y-64]>w)
                SMD[x-64][y-64]=w;
                if(d=='B')
                    if(SMD[y-64][x-64]>w)
                    SMD[y-64][x-64]=w;
            }
            else
            {
                if(MGD[x-64][y-64]>w)
                MGD[x-64][y-64]=w;
                if(d=='B')
                if(MGD[y-64][x-64]>w)
                    MGD[y-64][x-64]=w;
            }

        }
        cin>>x>>y;
        floyed_warshal(SMD);
        floyed_warshal(MGD);

        for(i=1; i<sz; i++)
        {
            int d1=SMD[x-64][i];
            int d2=MGD[y-64][i];
            if( d1!=inf && d2!=inf )
                ans.push_back(dt(i,d1+d2));
        }
        if(ans.size()==0)
        {
            printf("You will never meet.\n");
            continue;
        }
        sort(ans.begin(),ans.end(),comp);
        for(i=0; i<ans.size(); i++)
        {
            if(i==0)
                printf("%d",ans[i].d);
           if(ans[i].d==ans[0].d)
                printf(" %c",ans[i].n+64);
        }
        printf("\n");
   }
    return 0;
}
