#include <bits/stdc++.h>

using namespace std;

int row,col;
int visited[1001][1001],cell[1001][1001],level[1001][1001];
int fx[]={0,0,1,-1};
int fy[]={1,-1,0,0};
int bfs2D(int sx,int sy,int dx,int dy)
{
    visited[sx][sy]=1;
    queue<pair<int,int> >q;

    q.push(make_pair(sx,sy));

    level[sx][sy]=0;

    while(!q.empty())
    {
        pair<int,int>v=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
        int tx=v.first+fx[i];
        int ty=v.second+fy[i];

        if(tx>=0 && tx<row && ty>=0 && ty<col && cell[tx][ty]!=-1 && visited[tx][ty]==-1)
        {
            visited[tx][ty]=1;
            level[tx][ty]=level[v.first][v.second]+1;
            if(tx==dx && ty==dy)return level[tx][ty];
            q.push(make_pair(tx,ty));
        }
    }
    }
    return 0;
}

int main()
{
    int bombNumber,u,v,nm,sx,sy,dx,dy;
    while(1)
    {
        cin>>row>>col;
        if(row==0 && col==0)break;
       memset(visited,-1,sizeof(visited));
       memset(cell,0,sizeof(cell));
        cin>>bombNumber;
        for(int i=0;i<bombNumber;i++)
        {
            cin>>u>>nm;
            for(int j=0;j<nm;j++)
            {
                cin>>v;
                cell[u][v]=-1;
            }
        }
        cin>>sx>>sy>>dx>>dy;
        int r=bfs2D(sx,sy,dx,dy);
        cout<<r<<endl;
    }
    return 0;
}
