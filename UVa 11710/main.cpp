#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>
#include<cstring>
#include<iostream>
#include<set>
#include<iterator>
#define sz 405
using namespace std;
//simple graph problem
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
struct edgest
{
    string a,b;
    int c;
    edgest(string e,string f,int cost)
    {
        a=e;
        b=f;
        c=cost;
    }
};

vector<edge>vec;
vector<edgest>temp;
int n,e;
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
struct nd
{
    int node;
    int cnt;
};
nd mst(void)
{
    int i,j,x,y;
    nd xx;
    xx.cnt=xx.node=0;
    for(i=0; i<e; i++)
    {
        x=set_find(vec[i].f);
        y=set_find(vec[i].t);
        if(x!=y)
        {
            link(x,y);
            xx.cnt+=vec[i].c;
            xx.node++;
        }

    }
    return xx;
}
void ini(void)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
}
map<string,int>mps;
map<int,string>mpi;
void clearall(void)
{
    vec.clear();
    temp.clear();
    mps.clear();
    mpi.clear();

}
int main()
{

    int tst,t,i,j,f,k,c,ansi,cs;
    char aa[50],bb[50];
    string ts,fs;
    while(scanf("%d %d",&n,&e)==2)
    {

        if(n==0 && e==0)break;
        ini();
        clearall();
        for(i=1; i<=n; i++)
        {
            scanf("%s",aa);
            mps[aa]=i;
            mpi[i]=aa;
        }
        for(j=0; j<e; j++)
        {
            scanf("%s %s %d",aa,bb,&c);
            ts=aa;
            fs=bb;
            temp.push_back(edgest(ts,fs,c));
        }
        scanf("%s",aa);
        for(i=0; i<e; i++)
        {
            string x,y;
            x=temp[i].a;
            y=temp[i].b;
            // cout<<"direct:"<<x<<" "<<y<<" "<<temp[i].c<<"\n";
            //   cout<<mps[x]<<" "<<mps[y]<<" "<<temp[i].c<<"\n";
            vec.push_back(edge(mps[x],mps[y],temp[i].c));
        }
        sort(vec.begin(),vec.end(),comp);
        nd tmp;
        tmp=mst();
        if(tmp.node!=n-1)
            printf("Impossible\n");
        else
            printf("%d\n",tmp.cnt);
    }
    return 0;
}
