#include <bits/stdc++.h>

using namespace std;


int edge=10,d[100][100];

void floyed()
{

    for(int i = 0;i<=edge;i++)
    {
        for(int j = 0;j<=edge;j++)
        {
            for(int k = 0;k<=edge;k++)
            {
                if(d[j][k]>d[j][i]+d[i][k])
                {
                    d[j][k]=d[j][i]+d[i][k];
                }
            }
        }
    }
}


int main()
{    for(int i =0;i<100;i++)
    {
        for(int j = 0;j<100;j++)
        {
            d[i][j] = 999999999;
        }
    }
      int a,b,node,edge,cst;
    cout << "enter the number of nodes and edges : " << endl;
    cin>>node>>edge;

    cout<<"enter the edges and their costs : ";

    for(int i = 0;i<edge;i++)
    {
        cin>>a>>b>>cst;

        d[a][b] =cst;
        d[b][a] = cst;
    }
    floyed();
    for(int i = 1;i<=edge;i++)
    {
        for(int j = 1;j<=edge;j++)
        {
            cout<<i<<" and "<<j<<"is :"<<d[i][j]<<endl;
        }
    }
        return 0;
}
