#include <iostream>

using namespace std;

int arr[1000];
struct info{
int sum = 0;
int prop = 0;}tree[3000];
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
    tree[node].sum = tree[left].sum+tree[right].sum+tree[node].prop;
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
    tree[node].sum =tree[left].sum+tree[right].sum;
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
    int n,i,j,b,e,new_value;
    cout<<" n "<<endl;
    cin>>n;
    cout<<"numbers "<<endl;
    for(int i = 1;i<=n;i++)
    {
        cin>>arr[i];
    }
    initialize(1,1,n);
    cout<<"i j"<<endl;
    cin>>i>>j;
    cout<<query(1,1,n,i,j,0);
    cout<<"b e new_value "<<endl;
    cin>>b>>e>>new_value;
    update(1,1,n,b,e,new_value);
    cout<<"i j"<<endl;
    cin>>i>>j;
    cout<<query(1,1,n,i,j,0);
    return 0;
}
