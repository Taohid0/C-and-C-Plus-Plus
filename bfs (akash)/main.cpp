#include<bits/stdc++.h>
using namespace std;

vector<int>allch[100];
int adi_node,ses_node,bad_jasse;

void bfs(int nodes,int source)
{
    queue<int >Qu;
    Qu.push(source);

    int Visited[100]={0};
    int level[100]={0};

    //int parent[100]={0};
    Visited[source]=1;
    level[source]=0;

    while(!Qu.empty())
    {
        adi_node = Qu.front();
        for(int i=0;i<allch[adi_node].size();i++)
        {
            ses_node = allch[adi_node][i];
            //printf("SES NODE for ADI NODE %d is ---- %d : %d\n",adi_node,i,ses_node);
            if(Visited[ses_node]==0)
            {
               Visited[ses_node]=1;
               level[ses_node] = level[adi_node]+1;
               Qu.push(ses_node);

            }
/*
 *             bad_jasse =  Qu.front();
 *             cout<<" BAD JASSE : "<<bad_jasse<<endl;
 */

        }
        Qu.pop();




    }
    for(int i = 1;i<=nodes;i++)
        {
            printf("Distance between %d to %d is %d\n",source,i,level[i]);
        }
}

int main()
{
    int n,i,Edge,Node,a;
    cout<<"Enter the number of Edges and nodes : ";
    cin>>Edge>>Node;

    for(i=1;i<=Node;i++)
    {
        cout<<"Enter the "<<i<<" th node's edges : ";
        cin>>n;
        while(n--)
        {
            cin>>a;
            allch[i].push_back(a);
        }
    }
    cout<<"Enter a source : ";
    cin>>a;
    bfs(Node,a);
}
