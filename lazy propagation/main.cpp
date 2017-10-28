#include <bits/stdc++.h>

using namespace std;

struct info{
int sum=0;
int prop=0 ;
}tree[3000];
int arr[1000];
void initialize(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].sum = arr[b];
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    tree[node].sum = tree[left].sum+tree[right].sum;
}
void update(int node,int b,int e,int i,int j,int value)
{
    if(b>j or e<i)return;
    if (b>=i and e<=j)
    {
        tree[node].sum +=(e-b+1)*value;
        tree[node].prop+=value;
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,j,value);
    update(right,mid+1,e,i,j,value);
    tree[node].sum = tree[left].sum+tree[right].sum+(b-e+1)*tree[node].prop;
}
int query(int node,int b,int e,int i,int j,int carry)
{
    if(b>j or e<i)return 0;
    if(b>=i and e<=j)
    {
        return tree[node].sum+(e-b+1)*carry;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    int p1 = query(left,b,mid,i,j,tree[node].prop+carry);
    int p2 = query(right,mid+1,e,i,j,tree[node].prop+carry);
    return p1+p2;
}
int main()
{
    int n,b,e,value;
    cout<<"n"<<endl;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        cin>>arr[i];
    }
    initialize(1,1,n);
    cout<<"b e"<<endl;
    cin>>b>>e;
    cout<<query(1,1,n,b,e,0);
    cout<<"b e value"<<endl;
    cin>>b>>e>>value;
    update(1,1,n,b,e,value);
    cout<<"b e"<<endl;
    cin>>b>>e;
    cout<<query(1,1,n,b,e,0);
    return 0;
}
