#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

int main()
{
    vector<int> edges[MAX];
    vector<int> cost[MAX];
    int edge,n1,n2;

    cin>>edge;

    for(int i = 0; i<edge;i++){
        cin>>n1>>n2;

        edges[n1].push_back(n2);
        edges[n2].push_back(n1);
        cost[n1].push_back(1);
        cost[n2].push_back(1);
    }
    int size;
    sort(edges[1].begin(),edges[1].end());
    size = edges[1].size();
    for(int i= 0;i<size;i++){
        cout<<edges[1][i]<<" ";
    }
    return 0;
}
