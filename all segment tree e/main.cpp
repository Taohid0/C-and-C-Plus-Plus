#include <bits/stdc++.h>

using namespace std;

int tree[100005*3];

void update(int node,int b,int e,int i,int j)
{
   // cout<<node<<" "<<b<<" "<<e<<endl;
    if(b>j or e<i)
    {
        return;
    }
    if(b>=i and e<=j)
    {
        tree[node]++;
        return;
    }
    int left = node*2;
    int right =left+1;
    int mid = (b+e)/2;
    update(left,b,mid,i,j);
    update(right,mid+1,e,i,j);
    //tree[node]=tree[left]+tree[right];
}
int query(int node,int b,int e,int i,int carry)
{

    if(b>i or e<i)
        return 0;
    if(b==e)
        return tree[node]+carry;
    int left = node*2;
    int right =left+1;
    int mid = (b+e)/2;
    int p1 =query(left,b,mid,i,carry+tree[node]);
    int p2 = query(right,mid+1,e,i,tree[node]+carry);
    return p1+p2;
}

int main()
{
    int q,test,i,j;


    char c;
    string s;
    cin>>test;
    for(int I = 1;I<=test;I++)
    {

        memset(tree,0,sizeof tree);
        cin>>s;
        int n = (int)s.size();
        printf("Case %d:\n",I);
        scanf("%d",&q);
        while(q--){
                getchar();
        scanf("%c",&c);

        if(c=='I')
        {
            scanf("%d%d",&i,&j);
           // cout<<c<<" "<<i<<" "<<j<<endl;
            update(1,1,n,i,j);
        }
        else
        {
            scanf("%d",&i);
            int r= query(1,1,n,i,0);
            //cout<<r<< " r"<<endl;
            if(r%2)
            {
                printf("%d\n",'1'-s[i-1]);
            }
            else

            {
                printf("%c\n",s[i-1]);
            }
        }}
    }
    return 0;
}
