#include <bits/stdc++.h>

using namespace std;

vector<string>graph;
int visited[100][100],vv=0,m,n;
int dirx[] = {-1,0,1,1,1,0,-1,-1};
int diry[] ={-1,-1,-1,0,1,1,1,0};
int counter;

void dfs(int i,int j)
{
    counter++;
    visited[i][j]=vv;

    for(int I = 0;I<8;I++)
    {
        int x =i+dirx[I];
        int y= j+diry[I];

        if(x>=0 and y>=0 and x<m and y<n and visited[x][y]!=vv and graph[x][y]=='1')
        {
            dfs(x,y);
        }
    }
}

int main()
{
    int test,r;
    bool flag =false;
    string s;
    cin>>test;
    getchar();
    getchar();
    while(test--)
    {

        vv++;
        r=0;
        graph.clear();
        while(getline(cin,s))
        {
            if(s.empty())
                break;
            graph.push_back(s);
        }
        m = graph[0].size();
        n =graph.size();


        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(visited[i][j]!=vv and graph[i][j]=='1')
                {
                    counter=0;
                    dfs(i,j);

                    r = max(r,counter);
                }
            }
        }
        if(flag)cout<<endl;
        cout<<r<<endl;
        flag =true;
    }
    return 0;
}
