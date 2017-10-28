#include <bits/stdc++.h>

using namespace std;

int visited[100][100],visited_value=0;

int dirx[] = {0,1,0,-1};
int diry[] = {1,0,-1,0};
int m,n,x,y,counter;
int srcx,srcy;
char c;
vector<string>graph;
void dfs(int i,int j)
{
    counter++;
    visited[i][j] =visited_value;

    for(int I = 0;I<4;I++)
    {
        x = i+dirx[I];
        y = j+diry[I];
        if(y==n)
            y=0;
        else if(y==-1)
            y=n-1;
        if(x>=0 and y>=0 and x<m and visited[x][y]!=visited_value and graph[x][y]==c)
        {
            dfs(x,y);
        }
    }
}

int main()
{
    string s;
    while(scanf("%d%d",&m,&n)==2)
    {
        int r=0;
        visited_value++;
        counter=0;


        graph.clear();
        for(int i = 1;i<=m;i++)
        {
            cin>>s;
            graph.push_back(s);
        }
        scanf("%d%d",&srcx,&srcy);
        c = graph[srcx][srcy];
        dfs(srcx,srcy);
        for(int i =0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(visited[i][j]!=visited_value and graph[i][j]==c)
                {
                    counter=0;
                    dfs(i,j);

                      r = max(r,counter);

                }
            }
        }
        cout<<r<<endl;
    }
    return 0;
}
