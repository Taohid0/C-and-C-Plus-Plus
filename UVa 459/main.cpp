#include <bits/stdc++.h>

using namespace std;

vector<int>graph[100];
typedef vector<bool>vb;
vb visited;
void dfs(int src)
{

    for(int i = 0;i<(int)graph[src].size();i++)
    {
        if(!visited[graph[src][i]]){visited[graph[src][i]]=1;
        dfs(graph[src][i]);}
    }

}

int main()
{

    int t;
    char c;
    string c1;
    cin>>t;
    getchar();

    while(t--)
    {
        for(int i = 0;i<100;i++)
        {
            graph[i].clear();
        }
        cin>>c;
            getchar();
        visited.assign(100,0);
        while(1)
        {
             getline(cin,c1);
            if(c1=="")break;

            graph[c1[0]-'A'].push_back(c1[1]-'A');
            graph[c1[1]-'A'].push_back(c1[0]-'A');
            //cout<<c1[0]-'A'<< " "<<c1[1]-'A'<<" ";
        }
        int highest =c-'A'+1;

        int result = 0;
        for(int i= 0;i<highest;i++)
        {
            if(!visited[i])
            {
                result++;
                dfs(i);
            }
        }
        cout<<result<<endl;
       if(t)cout<<endl;
    }

    return 0;
}
