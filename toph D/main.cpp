#include <bits/stdc++.h>

using namespace std;

int arr[10000005];
int pmchk[10000005];
int tree[10000005*3];

void sieve()
{
    pmchk[0]=pmchk[1]=1;
    for(int i = 2;i*i<=10000005;i++)
    {
        if(pmchk[i]==0)
        for(int j = i*i;j<=10000005;j+=i)
        {
            pmchk[j]=1;
        }
    }
}
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return ;
    }
    int left = node*2;
    int right=node*2+1;
    int mid= (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = tree[left]+tree[right];

}

int query(int node,int b,int e,int i,int j)
{
    if(b>=i && e<=j)
    {
        return tree[node];
    }
    if(b>j || e<i)
    {
        return 0;
    }
    int left= node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    long long p1 =query(left,b,mid,i,j);
    long long p2 = query(right,mid+1,e,i,j);
    return p1+p2;
}

void update(int node,int b,int e,int i,int value)
{
    if(b==i && e==i)
    {
        tree[node] = value;
        return;
    }
    if(b>i || e<i)return;
    int left= node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    tree[node] = tree[left]+tree[right];
}

int main()
{
    sieve();
    int n,value,q,u,v,code;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&value);

        if(pmchk[value]==0)
            arr[i+1]=1;
        else arr[i+1]=0;

    }
    init(1,1,n);
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d%d%d",&code,&u,&v);

        if(code==1)
        {
            int r = query(1,1,n,u,v);
            printf("%d\n",r);
        }
        else
        {
            int t;
            if(pmchk[v]==0)t=1;
            else t=0;
            update(1,1,n,u,t);
        }
    }
    return 0;
}
