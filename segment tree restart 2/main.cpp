#include <bits/stdc++.h>

using namespace std;

#define maxIndex 10000
int arr[maxIndex],tree[maxIndex*3];

void initialize_tree(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    initialize_tree(left,b,mid);
    initialize_tree(right,mid+1,e);
    tree[node] =tree[left]+tree[right];
}

int query(int node,int b,int e,int i,int j)
{
    if(b>j or e<i)return 0;
    if(b>=i and e<=j)return tree[node];
    int left  = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    int p1 = query(left,b,mid+1,i,j);
    int p2 = query(right,mid+1,e,i,j);
    return p1+p2;
}
void update(int node,int b,int e,int j,int new_value)
{
    if(b==e)
    {
        tree[node] =new_value;
        return;
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    update(left,b,mid,j,new_value);
    update(right,mid+1,e,j,new_value);
    tree[node] = tree[left]+tree[right];
}

int main()
{
    int n,b,e,i,j,new_value;
    cout<<"number of values : "<<endl;
    cin>>n;
    cout<<"Enter the values "<<endl;
    for(int i = 1;i<=n;i++)
    {
        cin>>arr[i];
    }
    initialize_tree(1,1,n);
    cout<<query(1,1,n,1,n);
        return 0;
}
