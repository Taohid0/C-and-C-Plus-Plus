#include <bits/stdc++.h>

using namespace std;

int arr[100010];
int tree[3*100010];
int pre[100010],post[100010];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = pre[b];
        return;
    }
    int left =node*2;
    int right =node*2+1;
    int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = max(tree[left],tree[right]);
  //  cout<<tree[node]<<endl;
}

int queey(int node,int b,int e,int i,int j)
{
    if(b>j || e<i)return -1;
    if(b>=i && e<=j)return tree[node];
    int left = node*2;
    int right = node*2+1;
    int mid =(b+e)/2;
    int p1 = queey(left,b,mid,i,j);
    int p2 = queey(right,mid+1,e,i,j);
    return max(p1,p2);
}
int main()
{
    int n,q;
    ios::sync_with_stdio(false);

    map<int,int>mp;
    while(cin>>n){
            if(!n)break;
    cin>>q;
    for(int i = 1;i<=n;i++)
    {
        cin>>arr[i];

    }
    pre[1] = 1;
    for(int i = 2;i<=n;i++)
    {
        if(arr[i-1]==arr[i])
        {
            pre[i] = pre[i-1]+1;
        }
        else
            pre[i] = 1;
    }
    post[n] =1;
    for(int i = n-1;i>=1;i--)
    {
        if(arr[i]==arr[i+1])
        {
            post[i] = post[i+1]+1;
        }
        else
            post[i] = 1;
    }
    init(1,1,n);
    int u,v;
    for(int i = 1;i<=q;i++)
    {
        cin>>u>>v;
        int r;
        if(arr[u]==arr[v])
        {
            r = v-u+1;
        }
        else
         r = max(post[u],queey(1,1,n,u+post[u],v));
        cout<<r<<endl;
    }
    }

    return 0;
}
