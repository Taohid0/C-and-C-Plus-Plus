#include <bits/stdc++.h>

using namespace std;

vector<int>graph[100],cost(100);
int d[100][100],edge;



void floyed(){
    for(int k =0;k<=edge+1;k++)
    {
        for(int i = 0;i<=edge+1;i++)
        {
            for(int j = 0;j<=edge+1;j++)
            {
                if(d[i][j]>d[i][k]+d[k][j])
                {
                    d[i][j]=d[i][k]+d[k][j];
                }
            }
        }
    }
}

int main()
{   int a,b,node,cst;
for(int i= 0;i<100;i++)
{
    for(int j = 0;j<100;j++)
    {
        d[i][j] = 10000000;
    }
}
    cout << "enter the number of node and edge : " << endl;
    cin>>node>>edge;

    cout<<"enter the edges : ";

    for(int i = 0;i<edge;i++)
    {
        cin>>a>>b>>cst;
        graph[a].push_back(b);
        graph[b].push_back(a);
        d[a][b] = cst;
        d[b][a] = cst;
    }floyed();
    for(int i =1;i<=edge;i++)
    {
        for(int j =1;j<=edge;j++)
        {
            cout<<i<<j<<" "<<d[i][j]<<endl;
        }
    }

    cout<<d[1][4];
    return 0;
}
