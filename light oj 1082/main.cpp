#include <bits/stdc++.h>

using namespace std;
int arr[100005];
int tree[300015];

void initialize(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    tree[node] = min(tree[left],tree[right]);
}
int query(int node,int b,int e,int i,int j)
{
    if(b>j or e<i)return 100005;
    if(b>=i and e<=j)return tree[node];
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    int p1 = query(left,b,mid,i,j);
    int p2 = query(right,mid+1,e,i,j);
    return min(p1,p2);
}
int main()
{
    int n,a,result,b,c,d;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        for(int j = 1;j<=a;j++)
        {
            scanf("%d",&arr[j]);
        }
        initialize(1,1,a);
        printf("Case %d:\n",i);
        for(int j = 1;j<=b;j++)
        {
            scanf("%d%d",&c,&d);
            result =query(1,1,a,c,d);
            printf("%d\n",result);

        }
    }
    return 0;
}
