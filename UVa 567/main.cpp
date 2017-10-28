#include <bits/stdc++.h>

using namespace std;
int graph[21][21];

void addValue()
{
    for(int i=  1;i<21;i++)
    {
        for(int j = 1;j<21;j++)
        {
            if(i==j)graph[i][j] = 0;
            else
                graph[i][j] = 999999;
        }
    }
}
int main()
{
    int n,round = 1,higher;
     addValue();
     int c = 1,strt,last,q;
    while(cin>>n)
    {
        for(int i = 0;i<n;i++)
        {
            cin>>higher;
            graph[round][higher]=1;
            graph[higher][round] = 1;
        }
        round++;
        if(round==20)
        {
            for(int i = 1;i<=20;i++)
            {
                for(int j = 1;j<=20;j++)
                {
                    for(int k = 1;k<=20;k++)
                    {
                        graph[j][k] = min(graph[j][k],graph[j][i]+graph[i][k]);
                    }
                }
            }

            cout<<"Test Set #"<<c++<<endl;


            cin>>q;
            for(int i = 0;i<q;i++)
            {
                cin>>strt>>last;
                printf("%2d to %2d: %d\n",strt,last,graph[strt][last]);
            }
            addValue();
        round = 1;
        cout<<endl;
        }

    }
    return 0;
}
