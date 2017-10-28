#include <bits/stdc++.h>

using namespace std;

struct info
{
    long long int fmax,smax;
};
long long int arr[100005];
info tree[3*100005];
info invalid;
void initialize(int node,int b,int e)
{
   /* if(e-b==1)
    {
        tree[node].fmax=arr[b];
        tree[node].smax =arr[e];

        return;
    }*/
    if(b==e)
    {
        tree[node].fmax=arr[b];
        tree[node].smax = -100;

        return;
    }
    int left= node*2;
    int right =left+1;
    int mid =(b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    priority_queue<long long int>pq;
    pq.push(tree[left].fmax);
    pq.push(tree[left].smax);
    pq.push(tree[right].fmax);
    pq.push(tree[right].smax);
    tree[node].fmax = pq.top();
    pq.pop();
    tree[node].smax = pq.top();

}
info result(int node,int b,int e,int i,int j)
{
    if(e<i or b>j)
    {
        invalid.fmax=-1;
        invalid.smax = -1;
        return invalid;
    }
    if(b>=i and e<=j)
    {
        return tree[node];
    }
    int left = node*2;
    int right =left+1;
    int mid = (b+e)/2;
    info p1 = result(left,b,mid,i,j);
    info p2 = result(right,mid+1,e,i,j);
    info temp;
    priority_queue<long long int>pq;
    pq.push(p1.fmax);
    pq.push(p1.smax);
    pq.push(p2.fmax);
    pq.push(p2.smax);
    temp.fmax = pq.top();
    pq.pop();
    temp.smax = pq.top();

    return temp;
}

void update(int node,int b,int e,int i,int value)
{
    if(i>e or i<b)
        return;
    if(b==e)
    {
        tree[node].fmax=value;
        tree[node].smax =-1;
        return;
    }
    int left =node*2;
    int right = left+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    priority_queue<long long int>pq;
    pq.push(tree[left].fmax);
    pq.push(tree[left].smax);
    pq.push(tree[right].fmax);
    pq.push(tree[right].smax);
    tree[node].fmax = pq.top();
    pq.pop();
    tree[node].smax = pq.top();
}

int main()
{
    long long int q,n,x,y;
    char c;
    while(scanf("%lld",&n)==1)
    {
        for(int i =1;i<=n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        initialize(1,1,n);
        scanf("%lld",&q);
        for(int i=1;i<=q;i++)
        {
            getchar();
            scanf("%c%lld%lld",&c,&x,&y);
           // cout<<c<<" "<<x<<" "<<y<<endl;
            if(c=='U')
            {
                update(1,1,n,x,y);
            }
            else
            {
                info r = result(1,1,n,x,y);
                printf("%lld\n",r.fmax+r.smax);
                //cout<<r.fmax<<" "<<r.smax<<endl;
            }
        }
    }
    return 0;
}
