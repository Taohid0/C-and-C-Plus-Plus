#include <bits/stdc++.h>

using namespace std;

vector<string>v,emp;

int dr[]={1,1,1,-1,-1,-1,0,0};
int dy[]={1,0,-1,1,0,-1,1,-1};

int visited[105][105];
int m,n;

void dfs(int i,int j)
{
    visited[i][j] = 1 ;
    int x,y;
    for(int I=0;I<8;I++)
    {
        x = i+dr[I];
        y = j + dy[I];
        if(x<m and x>=0 and y<n and y>=0 and !visited[x][y])
        {
            if(v[x][y]=='@')
            {
                dfs(x,y);
            }
        }
    }
}

int main()
{
    string s;
    while(1)
    {
        memset(visited,0,sizeof(visited));
        v.clear();
        cin>>m>>n;
        if(!m and !n)break;

        for(int i = 0;i<m;i++)
        {
            cin>>s;
            v.push_back(s);
        }
        int counter = 0;
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(v[i][j]=='@' and visited[i][j]==0)
                {

                    counter++;
                    dfs(i,j);
                }
            }
        }
        cout<<counter<<endl;

    }

    return 0;
}
