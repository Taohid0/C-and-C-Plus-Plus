#include <bits/stdc++.h>

using namespace std;

int visited[101][101],vv=0,m,n;
vector<string>graph;
int dirx[] = {-1,0,1,1,1,0,-1,-1};
int diry[] ={-1,-1,-1,0,1,1,1,0};

void dfs(int i,int j)
{
    visited[i][j] = vv;

    for(int I = 0;I<8;I++)
    {
        int x = dirx[I]+i;
        int y = diry[I]+j;

        if(x>=0 and y>=0 and x<m and y<n and visited[x][y]!=vv and (graph[x][y]=='x' or graph[x][y]=='@'))
        {
            dfs(x,y);
        }
    }
}

int main()
{
    int test;
    string s;
    cin>>test;

    for(int I =1;I<=test;I++)
    {
        cin>>m;
        n=m;
        graph.clear();
        vv++;
        for(int i = 1;i<=m;i++)
        {
            cin>>s;
            graph.push_back(s);
        }
        int counter=0;
        for(int i = 0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((graph[i][j]=='x') and visited[i][j]!=vv)
                {
                    counter++;
                    dfs(i,j);
                }
            }
        }
        cout<<"Case "<<I<<": "<<counter<<endl;
    }
    return 0;
}
