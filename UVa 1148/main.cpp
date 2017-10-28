#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
#include<sstream>
#include<map>
#include<utility>

using namespace std;

#define sf scanf
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pf printf
#define clr(arr,val) memset(arr,val,sizeof(arr))
#define mp make_pair
#define pb push_back
#define inf (1<<30)-2
#define sz  100055

typedef long long int ll;

vector<int>vec[sz];
int dist[sz];
bool flag[sz];

int main()

{
    int tst,i,k,j,l,cs,n;
    bool chk=true;
    sf1(tst);
    while(tst--)
    {
        sf1(n);
        cs=n;
        for(i=0; i<=n; i++)
            vec[i].clear();
        clr(flag,0);
        while(n--)
        {
            sf2(i,l);
            while(l--)
            {
                sf1(k);
                vec[i].pb(k);
            }
        }
        sf2(i,j);
        queue<int>q;
        q.push(i);
        dist[i]=0;
        flag[i]=1;
        while(!q.empty())
        {
            int tp=q.front();
            q.pop();
            for(l=0; l<vec[tp].size(); l++)
            {
                if(flag[vec[tp][l]]==0)
                {
                    q.push(vec[tp][l]);
                    flag[vec[tp][l]]=1;
                    dist[vec[tp][l]]=dist[tp]+1;
                    if(vec[tp][l]==j)
                        goto prnt;

                }
            }
        }

prnt:
        {
            if(chk==false)
                puts("");
            chk=false;
            pf("%d %d %d\n",i,j,dist[j]-1);
        }

    }
    return 0;

}
