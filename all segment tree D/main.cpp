#include <bits/stdc++.h>

using namespace std;
long int arr[100005],tree[3*100005];
long int give;
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
    tree[node] = tree[left]+tree[right];
}

long int getSum(int node,int b,int e,int i,int j)
{
    if(b>j or e<i)
    {
        return 0;
    }
    if(b>=i and e<=j)
    {
        return tree[node];
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    long int p1 = getSum(left,b,mid,i,j);
    long int p2 = getSum(right,mid+1,e,i,j);
    return p1+p2;
}

void update(int node,int b,int e,int i,int value)
{
    if(i==b and i==e)
    {
        if(value==-1){
                give =tree[node];
            tree[node]=0;
        }
        else
            tree[node]+=value;;
        return;
    }
    if(i>e or i<b)return;

    int left  = node*2;
    int right = node*2+1;
    int mid= (b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    tree[node] = tree[left]+tree[right];
}

int main()
{
    int test,n,q,x,y,t;
    scanf("%d",&test);
    for(int i = 1;i<=test;i++)
    {
        scanf("%d%d",&n,&q);
        printf("Case %d:\n",i);
            for(int j = 1;j<=n;j++)
            {
                scanf("%ld",&arr[j]);
            }
            initialize(1,1,n);
            for(int j = 1;j<=q;j++)
            {
                scanf("%d",&t);
                if(t==1)
                {
                    scanf("%d",&x);
                    update(1,1,n,x+1,-1);
                    printf("%ld\n",give);
                }
                else if(t==2)
                {
                    scanf("%d%d",&x,&y);
                    update(1,1,n,x+1,y);
                }
                else
                {
                    scanf("%d%d",&x,&y);

                    long int r =getSum(1,1,n,x+1,y+1);
                    printf("%ld\n",r);
                }
            }
    }

    return 0;
}
