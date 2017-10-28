#include<bits/stdc++.h>

using namespace std;

int visited[100][100],vv=0;
vector<string>graph;
int m,n;
int dirx[] ={-1,0,-1,1,1,0,1,-1};
int diry[] = {-1,1,1,0,1,-1,-1,0};
int counter;
void dfs(int i,int j)
{//cout<<i<<" "<<j<<endl;
    counter++;
    visited[i][j] = vv;
    for(int I = 0;I<8;I++)
    {
        int x = i+dirx[I];
        int y= j+diry[I];

        if(x>=0 and y>=0 and x<m and y<n and visited[x][y]!=vv and graph[x][y]=='W')
            dfs(x,y);
    }
}


int main()
{
    string s,s2;
    int cse,srcx,srcy;

    cin>>cse;
    while(cse--)
    {
        vv++;
        graph.clear();

        while(cin>>s)
        {
            if(s[0]!='W' and s[0]!='L' )
            {
                break;
            }
            graph.push_back(s);
        }
        m = graph.size();
        n = graph[0].size();


        while(getline(cin,s2))
        {
            if(s2.empty())
                break;
            s+=" "+s2;
            s2=s;

            istringstream ss(s2);
            //cout<<s2<<endl;
            ss>>srcx>>srcy;
            //cout<<srcx<<" "<<srcy<<endl;
            counter=0;
            vv++;
            dfs(srcx-1,srcy-1);
            cout<<counter<<endl;
            s="";
        }
        if(cse)cout<<endl;
    }
    return 0;
}
