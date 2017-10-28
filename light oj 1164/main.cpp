#include <bits/stdc++.h>

using namespace std;

int arr[500005];
struct info{
int sum = 0;
int prop = 0;}tree[3*550005];
void initialize(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].sum = arr[b];
        return;
    }
    int left =node*2;
    int right = left+1;
    int mid = (b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    tree[node].sum = tree[left].sum+tree[right].sum;
}
void update(int node,int b,int e,int i,int j,int new_value)
{
    if(b>j or e<i)return ;
    if(b>=i and e<=j)
    {
        tree[node].sum+=(e-b+1)*new_value;
        tree[node].prop +=new_value;
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,j,new_value);
    update(right,mid+1,e,i,j,new_value);
    tree[node].sum =tree[left].sum+tree[right].sum+tree[node].prop;
   // cout<<tree[node].sum<<endl;
}
int query(int node,int b,int e,int i,int j,int carry)
{
    if(b>j or e<i)return 0;
    if(b>=i and e<=j)
    {
        return tree[node].sum +(e-b+1)*carry;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    int p1 = query(left,b,mid,i,j,carry+tree[node].prop);
    int p2 = query(right,mid+1,e,i,j,carry+tree[node].prop);
    return p1+p2;
}
int main()
{
    int test,n,x,y,v,m,q;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++)
    {
        memset(arr,0,sizeof(arr));
        memset(tree,0,sizeof(tree));
        scanf("%d%d",&n,&q);
        initialize(1,1,n+1);
        printf("Case %d:\n",i);
        for(int j =1;j<=q;j++)
        {
            scanf("%d",&v);
            if(v==0)
            {
                scanf("%d%d%d",&x,&y,&m);
                update(1,1,n+1,x+1,y+1,m);
                //int p = query(1,1,n+1,1,10,0);
                //printf("%d\n",p);
            }
            else
            {
                scanf("%d%d",&x,&y);
                int p = query(1,1,n+1,x+1,y+1,0);
                printf("%d\n",p);
            }
        }
    }

    return 0;
}
