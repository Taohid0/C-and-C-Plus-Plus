#include <bits/stdc++.h>

using namespace std;

struct info{
long long int sum,propagate;
};
info tree[5*5500005];

void update(long long int node,long long int b,long long int e,long long int i,long long int j,long long int value)
{
    if(b>j or e<i)
        return;
    if(b>=i and e<=j)
    {
        tree[node].sum+=(e-b+1)*value;;
        tree[node].propagate+=value;
        return;
    }
    long long int left = node*2;
    long long int right = left+1;
    long long int mid = (b+e)/2;
    update(left,b,mid,i,j,value);
    update(right,mid+1,e,i,j,value);
    tree[node].sum=tree[left].sum+tree[right].sum+(long long int)tree[node].propagate*(e-b+1);
}

long int querySum(long long int node,long long int b,long long int e,long long int i,long long int j,long long int carry)
{
    if(b>j or e<i)
        return 0;
    if(b>= i and e<=j)
    {
        return tree[node].sum+(e-b+1)*carry;

    }
    long long int left =node*2;
    long long int right =left+1;
    long long int mid = (b+e)/2;
    long long int p1 = querySum(left,b,mid,i,j,carry+( long long int)tree[node].propagate);
    long long int p2 = querySum(right,mid+1,e,i,j,carry+(long long int)tree[node].propagate);
    return p1+p2;
}

int main()
{
    long long int t,n,q,x,y,v,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&q);
        memset(tree,0,sizeof tree);

        for(long long int i=1;i<=q;i++)
        {
            scanf("%lld",&c);
            if(c==0)
            {
                scanf("%lld%lld%lld",&x,&y,&v);
                update(1,1,n,x,y,v);
            }
            else
            {
                scanf("%lld%lld",&x,&y);
                //prlong long intf("%lld\n",querySum(1,1,n,x,y,0));
                long long ans = querySum(1,1,n,x,y,0);
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
