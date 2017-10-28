#include <bits/stdc++.h>

using namespace std;
int len,m,n;
vector<string>graph;
//here is an error in this code
int dirx[] = {-1,0,1,1,1,0,-1,-1};
int diry[] = {-1,-1,-1,0,1,1,1,0};
int visited[100][100],vv=0;
bool flag =false;
string pstr;
void dfs(int i,int j,int l)
{
    if(l==len)
            {
                flag =true;
                return;
            }
    visited[i][j] =vv;

    for(int I =0;I<8;I++)
    {
        int x = dirx[I]+i;
        int y = diry[I]+j;
        if(x>=0 and y>=0 and x<m and y<n and visited[x][y]!=vv and tolower(graph[x][y])==tolower(pstr[l]))
        {

            if(l==len)
            {
                flag =true;
                return;
            }
            else
                dfs(x,y,l+1);
        }
    }
}

int main()
{
   int test,q;
   cin>>test;
   string s;
   while(test--)
   {
       cin>>m>>n;
       graph.clear();
       for(int i = 1;i<=m;i++)
       {
           cin>>s;
           graph.push_back(s);
       }
       cin>>q;
       while(q--){
            cin>>s;
            len = s.size();
            pstr=s;
       for(int i =0;i<m;i++)
       {
           for(int j =0;j<n;j++)
           {
               vv++;
               flag = false;

               if(tolower(s[0])==tolower(graph[i][j]))
               {
                   dfs(i,j,1);
               }
               if(flag)
               {
                   cout<<i+1<<" "<<j+1<<endl;
                   break;
               }
           }
           if(flag)
            break;
       }
       }
       if(test)cout<<endl;
   }
    return 0;
}
