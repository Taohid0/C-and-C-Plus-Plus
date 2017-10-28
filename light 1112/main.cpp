#include <bits/stdc++.h>

using namespace std;

int arr[100005],tree[300015];

void initalize(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] =arr[b];
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    initalize(left,b,mid);
    initalize(right,mid+1,e);
    tree[node] = tree[left]+tree[right];
}

int query(int node,int b,int e,int i,int j)
{
    if(b>j or e<i)return -1;
    if(b>=i and e<=j)
    {
        return tree[node];
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    int p1 = query(left,b,mid,i,j);
    int p2 = query(right,mid+1,e,i,j);
    return p1+p2;
}
int zero;
void update_to_zero(int node,int b,int e,int i)
{
    if(b==e)
    {
         zero= arr[node];
        arr[node] = 0;
        return;
    }
    if(b>i or e<i)return;

    int left = node*2;
    int right =left+1;
    int mid = (b+e)/2;
    update_to_zero(left,b,mid,i);
    update_to_zero(right,mid+1,e,i);
    tree[node] = tree[left]+tree[right];
}
void update(int node,int b,int e,int i,int value)
{
    if(b==e)
    {
        arr[node]+=value;
        return;
    }
    if(b>i or e<i)return;

    int left = node*2;
    int right =left+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    tree[node] = tree[left]+tree[right];
}

int main()
{
    int test,n,q,v,strt,en;
    scanf("%d",&test);
    for(int i =1;i<=test;i++)
    {
        scanf("%d%d",&n,&q);
        for(int j=1;j<=n;j++)
            {
                scanf("%d",&arr[j]);
            }
            initalize(1,1,n);
            printf("Case %d:\n",i);
        for(int j =1;j<=q;j++ )
        {
            scanf("%d",&v);
            if(v==1)
            {
                scanf("%d",&strt);
                update_to_zero(1,1,n,strt+1);
                printf("%d\n",zero);
            }
            else if(v==2)
            {
                scanf("%d%d",&strt,&en);
                update(1,1,n,strt+1,en+1);
            }
            else
            {
                scanf("%d%d",&strt,&en);
                int r = query(1,1,n,strt+1,en+1);
                printf("%d\n",r);

            }
        }
    }
    return 0;
}
