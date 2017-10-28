#include <bits/stdc++.h>

using namespace std;

long long arr[1000005],tree[3*1000005];

void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    int left = node*2;
    int right=left+1;
    int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = min(tree[left],tree[right]);
}

int ans(int node,int b,int e,int i,int j)
{
    if(i>e or j<b)return 999999999;
    if(b>=i and e<=j)
        return tree[node];

    int left=node*2;
    int right=left+1;
    int mid = (b+e)/2;
    long long p1 =ans(left,b,mid,i,j);
    long long  p2 = ans(right,mid+1,e,i,j);
    return min(p1,p2);
}

int main()
{
    int test,x,y,q,n;

    cin>>test;

    for(int i =1;i<=test;i++)
    {
        scanf("%d%d",&n,&q);

        for(int j  =1;j<=n;j++)
        {
            scanf("%d",&arr[j]);
        }
        init(1,1,n);
        printf("Scenario #%d:\n",i);
        for(int j =1;j<=q;j++)
        {
            scanf("%d%d",&x,&y);
            printf("%d\n",ans(1,1,n,x,y));
        }

    }
    return 0;
}
