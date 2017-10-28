#include <bits/stdc++.h>

using namespace std;

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int cell[100][100]; //checking for blocked place
int d[100][100],visited[100][100];
int row,col;

void bfs(int sx,int sy)
{
    memset(visited,0,sizeof(visited));
    queue<pair<int,int> >q;
    q.push(make_pair(sx,sy));
    visited[sx][sy]=1;

    while(!q.empty())
    {
        pair<int,int>v=q.front();q.pop();

        for(int i=0;i<4;i++)
        {
            int tx=v.first+fx[i];
            int ty=v.second+fy[i];
            if(tx>=0 && tx<row && ty>=0 && ty<col && cell[tx][ty]!=-1 && visited[tx][ty]!=1)
            {
                visited[tx][ty]=1;
                q.push(make_pair(tx,ty));
                d[tx][ty]=d[v.first][v.second]+1;
            }
        }
    }
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
