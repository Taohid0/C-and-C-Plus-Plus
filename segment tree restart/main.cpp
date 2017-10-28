#include<bits/stdc++.h>

using namespace std;


int arr[10000],tree[3*10000];

void initialize(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]= arr[b];
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    tree[node] =tree[left]+tree[right];
}

int query(int node,int b,int e,int i,int j)
{
    if(j<b || i>e)return 0;
    if(b>=i and e<=j)return tree[node];
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    int p1 = query(left,b,mid,i,j);
    int p2 = query(right,mid+1,e,i,j);
    return p1+p2;
}
void update(int node,int b,int e,int j,int newValue)
{
    if(j>e || j<b)return;
    if(b==e)
    {
        tree[node] =newValue;
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    update(left,b,mid,j,newValue);
    update(right,mid+1,e,j,newValue);
    tree[node] = tree[left]+tree[right];
}
int main()
{
    int n,b,e,i,new_value;
    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        cin>>arr[i];
    }
    initialize(1,1,n);
    cout<<"Enter the range "<<endl;
    cin>>b>>e;
    cout<<query(1,1,n,b,e)<<endl;
    cout<<"Enter index and new value" <<endl;
    cin>>i>>new_value;
    update(1,1,n,i,new_value);
    cout<<"Enter range "<<endl;
    cin>>b>>e;
    cout<<query(1,1,n,b,e);

    return 0;
}
