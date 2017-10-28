#include <iostream>

using namespace std;
int arr[100];
struct {
        int sum,prop = 0;
    }tree[300];

void init(int node,int b,int e)
{
    if(b==e){
        tree[node].sum=arr[b];
        return;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node].sum = tree[left].sum+tree[right].sum;
}

void update(int node,int b,int e,int i,int j,int value)
{
    if(b<=i && e>=j)
    {
        tree[node].sum+=(e-b+1)*value;
        tree[node].prop+=value;
        return;
    }
    if(b>j || e<i)return;
    int left = node*2;
    int right = node*2+1;
    int mid =(b+e)/2;

    update(left,b,mid,i,j,value);
    update(right,mid+1,e,i,j,value);
    tree[node].sum=tree[left].sum+tree[right].sum+(e-b+1)*tree[node].prop;
}
int query(int node,int b,int e,int i,int j,int carry)
{
    if(i>e || b>j)return 0;
    if(b>=i && e<=j)return tree[node].sum+carry*(e-b+1);
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    int p1 = query(left,b,mid,i,j,carry+tree[node].prop);
    int p2 = query(right,mid+1,e,i,j,carry+tree[node].prop);
    return p1+p2;
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
    while(1)
    {
        int op;
        cin>>op;
        if(op==1)
        {
            int u,v;
            cout<<"query"<<endl;
            cin>>u>>v;
            int r = query(1,1,n,u,v,0);
            cout<<r;
        }
        else
        {
            cout<<"update"<<endl;
            int u,v,value;
            cin>>u>>v>>value;
            update(1,1,n,u,v,value);
        }
    }
    return 0;
}
