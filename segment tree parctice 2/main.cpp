#include <iostream>

using namespace std;

int arr[100];
int tree[300];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=  arr[b];
        return;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node]=tree[left]+tree[right];

}
int query(int node,int b,int e,int i,int j)
{
    if(b<=i && e<=j)
    {
        return tree[node];
    }
    if(b>j || e<i)return 0 ;
    int left =node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    int p1 = query(left,b,mid,i,j);
    int p2 =query(right,mid+1,e,i,j);
    return p1+p2;
}
void update(int node,int b,int e,int i,int value)
{
    if(b==i && e==i){tree[node] = value;return;}
    if(b>i || e<i)return;
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
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
    init(1,1,n);
    int op;
    while(1)
    {
        cin>>op;
    if(op==1)
    {     cout<<"update"<<endl;
        int u,value;
        cin>>u>>value;
        update(1,1,n,u,value);
    }
    else
    {
        int u,v;
        cout<<"query"<<endl;
        cin>>u>>v;
        int r = query(1,1,n,u,v);
        cout<<r;
    }
    }
    return 0;
}
