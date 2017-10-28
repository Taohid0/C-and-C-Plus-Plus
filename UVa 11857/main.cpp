#include<stdio.h>
#include<vector>
#include<algorithm>
#define sz 1000005
using namespace std;
//easy
struct edge
{
    int f,t,c;
    edge(int a,int b,int co)
    {
        f=a;
        t=b;
        c=co;
    }
};
vector<edge>vec;
int n,e,cnt;
int comp(edge a,edge b)
{
    return a.c<b.c;
}
int par[sz];
int set_find(int a)
{
    if(a==par[a])
        return a;
    return(par[a]=set_find(par[a]));
}
void link(int x,int y)
{
    if(x>y)
        par[y]=x;
    else par[x]=y;
}
int mst(void)
{
    int i,x,y,mx=0;
    for(i=0; i<e; i++)
    {
        x=set_find(vec[i].f);
        y=set_find(vec[i].t);
        if(x!=y)
        {
            link(x,y);
            mx=max(mx,vec[i].c);
            cnt++;
        }
    }
    return mx;
}

void ini(void)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
}
int main()
{
 //   freopen("in.txt","r",stdin);
    int t,j,f,c,ans;

    while(scanf("%d %d",&n,&e)==2)
    {
        if(n==0 && e==0)
            break;
        ini();
        cnt=0;
        vec.clear();
        for(j=0; j<e; j++)
        {
            scanf("%d %d %d",&f,&t,&c);
            vec.push_back(edge(f,t,c));
        }
        sort(vec.begin(),vec.end(),comp);
        ans=mst();
        //  printf(" cnt %d\n",cnt);
        if(cnt!=n-1)
            printf("IMPOSSIBLE\n");
            else printf("%d\n",ans);

    }
    return 0;
}
