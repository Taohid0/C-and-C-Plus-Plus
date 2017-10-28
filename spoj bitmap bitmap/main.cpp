#include <bits/stdc++.h>

using namespace std;

vector<string>v;
int dis[200][200];
int dirx[] = {-1,0,1,0};
int diry[] = {0,-1,0,1};
int node,edge;
queue<pair<int,int> >q;
void bfs()
{

    while(!q.empty()){
        pair<int,int>info = q.front();
        q.pop();
    for(int I =0;I<4;I++)
    {

        int x = info.first+dirx[I];
        int y = info.second+diry[I];

        if(x>=0 and x<node and y>=0 and y<edge and dis[x][y]>dis[info.first][info.second]+1)
        {
            dis[x][y]=dis[info.first][info.second]+1;
            q.push(make_pair(x,y));
        }
    }}

}

int main()
{
    int t;
    string s;

    cin>>t;
    while(t--)
    {
        memset(dis,999999,sizeof(dis));

        cin>>node>>edge;

        for(int I =0;I<node;I++)
        {
            cin>>s;
            v.push_back(s);
            for(int J =0;J<edge;J++)
            {
                if(s[J]=='1')
                {
                          q.push(make_pair(I,J))              ;
                          dis[I][J] =0;
                }
            }
        }
        bfs();
        for(int i = 0;i<node;i++)
        {
            for(int j = 0;j<edge;j++)
            {
                cout<<dis[i][j]<<" ";
            }
            cout<<endl;
        }
        if(t)cout<<endl;


    }

    return 0;
}
