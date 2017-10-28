#include <bits/stdc++.h>
#define LL long long
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define REV(i,n) for(int i=n-1;i>=0;i--)
#define pri(a) cout << a << endl;
#define prii(a,b) cout << a << " " << b << endl;
using namespace std;

#define sz 100007
int a[sz], ltfrq[sz], rtfrq[sz], tr[4*sz];

void build(int node, int b, int e)
{
    if(b==e)
    {
        tr[node] = ltfrq[b];
        return;
    }
    int mid = (b+e)>>1;
    int lft = node<<1, rgt = lft+1;
    build(lft,b,mid);
    build(rgt,mid+1,e);
    tr[node] = max(tr[lft], tr[rgt]);
}

int query(int node, int b, int e, int i, int j)
{
    if(b>=i and e<=j) return tr[node];

    int mid = (b+e)>>1;
    int lft = node<<1, rgt = lft+1;

    if(j<=mid) return query(lft,b,mid,i,j);
    else if(i>mid) return query(rgt,mid+1,e,i,j);
    else return max(query(lft,b,mid,i,j), query(rgt,mid+1,e,i,j));
}

int main()
{
    int n,q,l,r,res;
    while(scanf("%d", &n)==1 and n!=0)
    {
        scanf("%d",&q);
        REP(i,n) scanf("%d",&a[i+1]);

        ltfrq[1] = 1;
        FOR(i,2,n)
        {
            if(a[i]==a[i-1]) ltfrq[i] = ltfrq[i-1] + 1;
            else ltfrq[i] = 1;
        }

        rtfrq[n] = n;
        for(int i=n-1; i>=1; i--)
        {
            if(a[i]==a[i+1]) rtfrq[i] = rtfrq[i+1] + 1;
            else rtfrq[i] = 1;
        }

        build(1,1,n);

        REP(i,q)
        {
            scanf("%d%d",&l,&r);

            if(a[l]==a[r]) res = r-l+1;
            else
            {
                res = max(rtfrq[l],query(1,1,n,l+rtfrq[l],r));
            }
            printf("%d\n", res);
        }
    }
    return 0;
}
