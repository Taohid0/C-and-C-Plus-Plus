#include <bits/stdc++.h>

using namespace std;


int arr[1000];
int tree[3000];

void make_tree(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = e;
        return;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    make_tree(left,b,mid);
    make_tree(right,mid+1,e);

    tree[node]= tree[left]+tree[right];
}

int query(int node,int b,int e,int i,int j)
{
    if(b>j || e<i)
    {
        return 0;
    }
    if(b>=i && e<=j)
    {
        return tree[node];
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    int p1 = query(left,b,mid,i,j);
    int p2 = query(right,mid+1,e,i,j);

    return p1+p2;

}

void update(int node,int b,int e,int i,int newValue)
{
    if(b>i || e<i)
    {
        return ;
    }
    if(b==e)
    {
        tree[node]  = newValue;
        return ;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;

    update(left,b,mid,i,newValue);
    update(right,mid+1,e,i,newValue);

    tree[node] = tree[left]+tree[right];
}

int main()
{
    int n;
    cin>>n;

    for(int i = 1;i<=n;i++)
    {
        cin>>arr[i];
    }

    make_tree(1,1,n);

    cout<<query(1,1,n,1,5)<<endl;

    update(1,1,n,1,100);

    cout<<query(1,1,n,1,5);

    return 0;
}
