#include<bits/stdc++.h>

using namespace std;
int arr[200010];
long long tree[200010*3];

void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return ;
    }
    int left = node*2;
    int right=node*2+1;
    int mid= (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = tree[left]+tree[right];

}

int query(int node,int b,int e,int i,int j)
{
    if(b>=i && e<=j)
    {
        return tree[node];
    }
    if(b>j || e<i)
    {
        return 0;
    }
    int left= node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    long long p1 =query(left,b,mid,i,j);
    long long p2 = query(right,mid+1,e,i,j);
    return p1+p2;
}

void update(int node,int b,int e,int i,int value)
{
    if(b==i && e==i)
    {
        tree[node] = value;
        return;
    }
    if(b>i || e<i)return;
    int left= node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    tree[node] = tree[left]+tree[right];
}

int main()
{
    string cmmnd;
    int u,v;
    //ios::sync_with_stdio(false);
    int n;int cs = 1;
    bool flag =false;
    while(cin>>n)
    {
        if(!n)break;
        if(flag)cout<<endl;
        for(int i = 1;i<=n;i++)
        {
            cin>>arr[i];
        }
        init(1,1,n);

        cout<<"Case "<<cs++<<":"<<endl;
        while(cin>>cmmnd)
        {    flag = true;
            if(cmmnd=="END")break;

            if(cmmnd[0]=='S')
            {
                cin>>u>>v;
                update(1,1,n,u,v);
            }
            else
            {
                cin>>u>>v;
                long long r= query(1,1,n,u,v);
                cout<<r<<endl;
            }
        }
    }

    return 0;
}
