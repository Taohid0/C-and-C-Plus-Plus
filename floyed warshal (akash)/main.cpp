#include<bits/stdc++.h>
using namespace std;
int inf=20020;
int pos[505][505];
int main()
{
    int tst,i,j,k,l,n,m,a,b,c,x,y,z,src;


        cin>>n>>m;

        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                pos[i][j]=inf;

        for(i=1;i<=m;i++)
        {
            cin>>x>>y>>z;
            pos[x][y]=z;

        }
        for(k=1;k<=n;k++)
            for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                {
                    pos[i][j]=min(pos[i][j],pos[i][k]+pos[k][j]);
                }

        int q;
        cin>>q;
        for(i=1;i<=q;i++)
        {
            cin>>x>>y;
            if(x==y) cout<<0<<endl;
            else if(pos[x][y]==inf) cout<<-1<<endl;
            else
            cout<<pos[x][y]<<endl;
        }


    return 0;
}
