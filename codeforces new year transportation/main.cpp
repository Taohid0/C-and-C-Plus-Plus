#include <iostream>

using namespace std;
int visited[3*10005];
int arr[3*10005];

void dfs(int current)
{
    if(visited[current])return;
    visited[current]=1;
    dfs(current+arr[current]);
}

int main()
{
    int n,test;
    cin>>n>>test;
    for(int i = 1;i<n;i++)
    {
        cin>>arr[i];
    }
    dfs(1);
    if(visited[test])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
