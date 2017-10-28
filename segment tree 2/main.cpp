#include <bits/stdc++.h>

using namespace std;

int arr[101];
int tree[303];

void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]  = tree[left]+tree[right];
}

int query(int node,int b,int e,int i,int j)
{
    if(b>j || e<i)return 0 ;

    if(b>=i && e<=j)
    {
        return tree[node];
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e
               )/2;
    int p1 = query(left,b,mid,i,j);
    int p2  = query(right,mid+1,e,i,j);
    return p1+p2;
}

void update(int node,int b,int e,int i,int newValue)
{
    if(i<b || i>b)return;

    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (left+right)/2;
    update(left,b,mid,i,newValue);
    update(right,mid+1,e,i,newValue);
    tree[node] = tree[left]+tree[right];
}
int main()
{
    int n,indx,val,bgn,en;

    cin>>n;
    for(int i =1;i<=n;i++)
    {
        cin>>arr[i];
    }
    build(1,1,n);
    cout<<"enter the query range\n";
    cin>>bgn>>en;

    int res = query(1,1,n,bgn,en);
    cout<<res<<endl;

    cin>>indx>>val;

    update(1,1,n,indx,val);

    res = query(1,1,n,bgn,en);
    cout<<res;
    return 0;
}
