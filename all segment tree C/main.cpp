#include <bits/stdc++.h>

using namespace std;

int arr[100005],tree[3*100005];

void initialize(int node,int b,int e)
{
    //cout<<node<<" "<<b<<" "<<e<<endl;
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    int left = node*2;
    int right =left+1;
    int mid  = (b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    tree[node] = max(tree[left],tree[right]);
}
int getResult(int node,int b,int e,int i,int j)
{
    if(i>e or j<b)return -999999;
    if(b>=i and e<=j)
    {
        return tree[node];
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    int t1= getResult(left,b,mid,i,j);
    int t2=getResult(right,mid+1,e,i,j);
    return max(t1,t2);
}

int main()
{
    int test,n,q,x,y;
    //scanf("%d",&test);

   // for(int i = 1;i<=test;i++)
   // {
        while(scanf("%d",&n)==1){
        for(int j = 1;j<=n;j++)
        {
            scanf("%d",&arr[j]);
        }
        initialize(1,1,n);
        //printf("Case %d:\n",i);
        scanf("%d",&q);
        for(int j =1;j<=q;j++)
        {
            scanf("%d%d",&x,&y);
            printf("%d\n",getResult(1,1,n,x,y));
        }
    }
    return 0;
}
