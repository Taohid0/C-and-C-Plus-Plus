#include <bits/stdc++.h>

using namespace std;

const int NX = 1000;
const int INF = 1e6; // 1000000

vector <int> graph[ NX ], cost[ NX ];
int node, edge, answer[ NX ], visit[ NX ], source, destination;


void dijkstra()
{
    answer[source] = 0;
    int update = 1;
    while( update )
    {
        update = 0;
        int minCost = INF, currentNode;
        for( int i = 1 ; i <= node; i++ )
        {
            if( visit[i] == 1 ) continue;
            if( minCost  > answer[i] )
            {
                minCost = answer[i];
                currentNode = i;
                update = 1;
            }
        }
        if( update == 0 )
        {
            break;
        }
        visit[currentNode] = 1;

        int sz = graph[currentNode].size();
        for( int i = 0 ; i < sz ; i++ )
        {
            int nxtNode = graph[currentNode][i];
            int edgeCost = cost[currentNode][i];
            if( visit[nxtNode] == 1 ) continue;
            answer[nxtNode] = min(answer[nxtNode], answer[currentNode] + edgeCost );

        }


    }
}
int main()
{
    return 0;
}
