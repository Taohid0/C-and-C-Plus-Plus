#include <bits/stdc++.h>

using namespace std;

int dirx[] = {0,1,0,-1};
int diry[] = {-1,0,1,0};
vector<string>graph;
int row,column;
int visited[10000][10000],visited_value;

void dfs(int i,int j)
{
    visited[i][j] = visited_value;


    for(int k=0;k<4;k++)
    {
        int x = i+dirx[k];
        int y = j+diry[k];
    //cout<<x<<" "<<y<<endl;
        if(x>=0 and y>=0 and x<row and y<column and visited[x][y]!=visited_value and graph[x][y]==graph[i][j])
        {
            dfs(x,y);
        }
    }
}

int main()
{
    int c;
    map<char,int>mp;
    set<pair<int,char> >r;
    cin>>c;
    string s;
    for(int I =1;I<=c;I++)
    {
        mp.clear();
        r.clear();
        graph.clear();
        visited_value=I;
        cin>>row>>column;

        for(int i = 1;i<=row;i++)
        {
            cin>>s;
            graph.push_back(s);
        }

        for(int i = 0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(visited[i][j]!=visited_value)
                {
                    mp[graph[i][j]]--;
                    dfs(i,j);
                }
            }
        }
        cout<<"World #"<<I<<endl;
        for (auto i:mp)
        {
            r.insert({i.second,i.first});
        }
        for (auto i:r)
        {
            cout<<i.second<<": "<<-i.first<<endl;
        }
    }

    return 0;
}
