#include <bits/stdc++.h>

using namespace std;

struct info{
int neg=0;
bool inZero=0;
}tree[100005*3];

int arr[100005];

void initialize(int node,int b,int e)
{
    if(b==e)
    {
        if(arr[b]<0)
            tree[node].neg=1;
        if(arr[b]==0)
            tree[node].inZero=1;
            return;
    }
    int left = node*2;
    int right=left+1;
    int mid =(b+e)/2;
    initialize(left,b,mid);
    initialize(right,mid+1,e);
    tree[node].inZero = tree[right].inZero or tree[left].inZero;
    tree[node].neg = tree[left].neg+tree[right].neg;
}
void update(int node,int b,int e,int i,int value)
{
    if(i>e or i<b)
        return;
    if(b==e)
    {
        tree[node].inZero=0;
        tree[node].neg=0;
        if(value<0)
        {
            tree[node].neg=1;
        }
        if(value==0)
        {
            tree[node].inZero=1;
        }
        return;
    }
    int left = node*2;
    int right =left+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,value);
    update(right,mid+1,e,i,value);
    tree[node].neg = tree[right].neg+tree[left].neg;
    tree[node].inZero = tree[left].inZero or tree[right].inZero;
}
info query(int node,int b,int e,int i,int j)
{
    if(b>j or e<i)
    {
        info temp;
        temp.inZero=0;
        temp.neg=0;
        return temp;
    }
    if(b>=i and e<=j)
    {
        return tree[node];
    }
    int left = node*2;
    int right = left+1;
    int mid = (b+e)/2;
    info p1 = query(left,b,mid,i,j);
    info p2 = query(right,mid+1,e,i,j);
    info temp;
    temp.neg=p1.neg+p2.neg;
    temp.inZero = p1.inZero or p2.inZero;
    return temp;
}
int main()
{
    int n,q,x,y;
    char c;
    while(scanf("%d%d",&n,&q)==2)
    {
        memset(tree,0,sizeof tree);
        for(int i =1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        initialize(1,1,n);
        while(q--)
        {
            getchar();
            scanf("%c%d%d",&c,&x,&y);
            if(c=='C')
            {
                update(1,1,n,x,y);
            }
            else
            {
                info r = query(1,1,n,x,y);
               // cout<<endl;
                //cout<<r.neg<<" neg"<<endl;
                if(r.inZero==1)
                    printf("0");
                else if(r.neg%2)
                    printf("-");
                else
                    printf("+");
            }
        }
        printf("\n");
    }
    return 0;
}
