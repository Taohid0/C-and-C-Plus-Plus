#include <bits/stdc++.h>

using namespace std;

int dirx[] = {1,-1,-2,-2,-1,1,2,2};
int diry[] = {-2,-2,-1,1,2,2,1,-1};
int dis[50][50];

void bfs(int sx,int sy,int dx,int dy)
{
    queue<pair<int,int> >q;
    q.push(make_pair(sx,sy));
    dis[sx][sy]=0;

    while(!q.empty())
    {
        pair<int,int>u = q.front();
        q.pop();
        for(int i = 0;i<8;i++)
        {
            int x = u.first+dirx[i];
            int y = u.second+diry[i];
            //cout<<x<<" "<<y<<endl;
            if(x>=1 and x<=8 and y>=1 and y<=8 and dis[x][y]>dis[u.first][u.second]+1)
            {
               // if(x!=dx and y!=dy)
                    q.push(make_pair(x,y));

                    dis[x][y] = dis[u.first][u.second]+1;
            }
        }
    }
}

int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        int a = s2[0]-'a'+1;
        int b = s2[1]-'0';
        //cout<<a<< " "<<b<<endl;
        memset(dis,999999,sizeof(dis));
        bfs(s1[0]-'a'+1,s1[1]-'0',s2[0]-'a'+1,s2[1]-'0');

        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<dis[a][b]<<" knight moves."<<endl;
    }
    return 0;
}
