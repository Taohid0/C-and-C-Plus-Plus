#include<bits/stdc++.h>
using namespace std;

int tree[3000000];

void segmentTree(int node,int b,int e,int i,int value)
{
    if(b==i && e==i)
    {tree[node] = value;
         return;}

    else{
        int left = node<<1;
        int right = left+1;
        int mid = (b+e)/2;

        if(i<=mid)segmentTree(left,b,mid,i,value);
        else segmentTree(right,mid+1,e,i,value);

        tree[node] = min(tree[left],tree[right]);
    }
}

int query(int node,int b,int e,int i,int j)
{
    if(j<b || i>e)return 9999999;

    else if(i<=b && j>=e)return tree[node];

    else
    {
        int left  = node*2;
        int right = node*2+1;
        int mid = (b+e)/2;

        int p1 = query(left,b,mid,i,j);
        int p2 = query(right,mid+1,e,i,j);

        return min(p1,p2);
    }
}




int main()
{
    int n,q,t;
    int test;
    cin>>test;

    for(int p = 1;p<=test;++p)
    {
    scanf("%d%d",&n,&q);

    for(int j = 1;j<=n;++j)
    {
        scanf("%d",&t);segmentTree(1,1,n,j,t);
    }


    cout<<"Case "<<p<<":"<<endl;
    while(q--){
    int st,en;
   scanf("%d%d",&st,&en);

    printf("%d\n",query(1,1,n,st,en));
   }


    }
    return 0;
}
