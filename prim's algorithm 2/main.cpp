#include <bits/stdc++.h>

using namespace std;


struct data
{
    int to,from,dist;

    bool operator < (const data & p)const
    {
        return dist>p.dist;
    }
};

priority_queue<data>q;

int prims()
{
    int visited[100]=  {0};

    int sum = 0;
    data d;



    while(!q.empty())
    {   d = q.top();
        if(!visited[d.to] && !visited[d.from])
        {
            sum+=d.dist;
            visited[d.to] = 1;
            visited[d.from] = 1;
            cout<<d.dist<<" ";
        }
        q.pop();
    }
    return sum;
}


int main()
{   data d;
int node,edge;
     FILE * pFile;
     pFile = fopen ("E:\\test.txt","r");
    cout<<"enter the number of nodes and their edges ";
    cin>>node>>edge;

    cout<<"enter the edges and their costs ";

    for(int i = 0;i<edge;i++)
    {
        cin>>d.from>>d.to>>d.dist;
        q.push(d);
    }

    int result = prims();
    fclose(pFile);
    cout<<endl<<result;
    return 0;
}
