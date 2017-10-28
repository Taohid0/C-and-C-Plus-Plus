#include <bits/stdc++.h>

using namespace std;
typedef vector<int> vi;

vector<int>graph[102];
vi dfsNum;
vi dfsLow;
vi dfsParent;
vector<bool>articulationPoints;
int UNVISITED = -1;

map<string,int>indexFind;
string nameFromIndex[102];
int dfsRoot,child,dfsNumberCounter;

void functionArticulation(int u)
{
    dfsLow[u] = dfsNum[u]=  dfsNumberCounter++;
    for(int i = 0;i<(int)graph[u].size();i++)
    {
        int v = graph[u][i];
        if(dfsNum[v]==UNVISITED)
        {
            dfsParent[v] = u;
            if(u==dfsRoot)child++;

            functionArticulation(v);
            if(dfsLow[v]>=dfsNum[u])
            {
                articulationPoints[u] = true;
            }
            dfsLow[u]=min(dfsLow[u],dfsLow[v]);
        }
        else if(v!=dfsParent[u])
        {
            dfsLow[u] = min(dfsLow[u],dfsNum[v]);
        }
    }
}

int main()
{
    int node,edge;
    string u,v;
    int c =1;
    bool flag =false;
    while(cin>>node)
    {   int indx = 0;
        if(!node)break;
        if(flag)cout<<endl;
        indexFind.clear();
        for(int G = 0;G<102;G++)
        {
            graph[G].clear();
        }
        while(node--)
        {
            cin>>u;
            indexFind[u]=  indx++;;
            nameFromIndex[indx-1]= u;
        }

        cin>>edge;
        while(edge--)
        {
            cin>>u>>v;
            graph[indexFind[u]].push_back(indexFind[v]);
            graph[indexFind[v]].push_back(indexFind[u]);

        }
        int r = 0;


        dfsNum.assign(101,UNVISITED);
        dfsLow.assign(101,0);
        dfsParent.assign(101,0);
        articulationPoints.assign(101,false);
        dfsRoot= 0;
        child = 0;
        dfsNumberCounter = 0;
        functionArticulation(0);
        if(child>1)articulationPoints[dfsRoot]=true;

        vector<string>resultString;

        for(int I = 0;I<indx;I++)
        {          cout<<I<<" - "<<articulationPoints[I]<<endl;
            if(articulationPoints[I]){r++;
            resultString.push_back(nameFromIndex[I]);
            }
        }
        sort(resultString.begin(),resultString.end());

        cout<<"City map #"<<c++<<": "<<r<<" camera(s) found"<<endl;
        for(int i = 0;i<(int)resultString.size();i++)
        {     //  cout<<i<< " "<<articulationPoints[i]<<endl;
              cout<<resultString[i]<<endl;

        }

       flag = true;
    }
    return 0;
}
