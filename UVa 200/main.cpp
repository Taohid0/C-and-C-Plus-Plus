#include <bits/stdc++.h>

using namespace std;

vector<int>graph[1001];
vector<char>vec;
int UNVISITED =-1;

vector<int>visited(1001,UNVISITED);
void dfs(int u)
{
    visited[u] = 1;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
        int v = graph[u][i];
        if(visited[v]==UNVISITED)
            dfs(v);
    }
    vec.push_back(u+'A');
}

int main()
{
    string s1,s2;
   int arr[28];
   memset(arr,0,sizeof(arr));
   cin>>s1;
   getchar();
    while(getline(cin,s2))
    {
       if(s2=="#") break;
        int len =min((int)s1.size(),(int)s2.size());
        for(int i = 0;i<len;i++)
        {//cout<<s1[i]<<" - "<<s2[i]<<endl;
            if(s1[i]!=s2[i])
            {
                arr[s1[i]-'A'] =1;
                arr[s2[i]-'A']=1;

                graph[s1[i]-'A'].push_back(s2[i]-'A');
                break;
            }
        }
        s1 =s2;
    }



        for(int i = 0;i<27;i++)
        {
            if(visited[i]==UNVISITED && arr[i])
            {
                dfs(i);
            }
        }
        int len =(int)vec.size();

        for(int i = len-1;i>=0;i--)
        {
            cout<<vec[i];
        }
        cout<<endl;
//        vec.clear();
//        for(int i = 0;i<1001;i++)
//            graph[i].clear();
//          visited.assign(1001,UNVISITED);
//          memset(arr,0,sizeof(arr));

    return 0;
}
