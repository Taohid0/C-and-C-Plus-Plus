#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    vector<std::vector<int> >graph(300005);
    int arr[300005] = {0};
    //int result[300005] = {0};
    int n,node,q;
    cin>>n>>q;
    for(int i = 2;i<=n;i++)
    {
        cin>>node;
        graph[node].push_back(i);
        arr[node]++;
    }
    for(int i =1;i<=q;i++)
    {      int r;
          cin>>node;
         // if(result[node]==0){
        int degree= -1;
        queue<int>q2;
        q2.push(node);


        while(!q2.empty())
        {
            int u = q2.front();
            q2.pop();
            if(degree<arr[u])
            {
                degree = arr[u];
                r=  u;
            }
           for(int j = 0;j<(int)graph[u].size();j++)
           {
               q2.push(graph[u][j]);
           }
        }
        }
        // r =arr[node];

        cout<<r<<endl;
   // }



    return 0;
}
