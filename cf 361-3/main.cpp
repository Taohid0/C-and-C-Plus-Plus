#include <bits/stdc++.h>

using namespace std;

int arr[1000],tree[4000];

void segmentTree(int node,int b,int e)
{
    if(b==e)
    {tree[node] = arr[b];
         return;}

    else{
        int left = node*2;
        int right = node*2+1;
        int mid = (b+e)/2;
        segmentTree(left,b,mid);
        segmentTree(right,mid+1,e);

        tree[node] = tree[left]+tree[right];
    }
}

int query(int node,int b,int e,int i,int j)
{
    if(j<b || i>e)return 0;

    else if(i<=b && j>=e)return tree[node];

    else
    {
        int left  = node*2;
        int right = node*2+1;
        int mid = (b+e)/2;

        int p1 = query(left,b,mid,i,j);
        int p2 = query(right,mid+1,e,i,j);

        return p1+p2;
    }
}

void update(int node,int b,int e,int i,int newValue)
{
    if(i>e || i<b)return;

    else if(b==e){tree[node] = newValue;return;}

    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,newValue);
    update(right,mid+1,right,i,newValue);

    tree[node] = tree[left]+tree[right];


}


int main()
{
    memset(tree,0,sizeof(tree));
    int n,sig,u,v,value;
    cin>>n;

    for(int i = 1;i<=n;i++)
    {
        cin>>sig;
        if(sig==1)
        {
            cin>>u>>v>>value;
            update(1,n,1,value);
        }
        else
        {
            cin>>u>>v;
            long long result =query(1,1,n,u,v);
            cout<<result<<endl;
        }
    }

    return 0;
}
