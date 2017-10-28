#include <bits/stdc++.h>

using namespace std;

priority_queue< pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;
pair<int,pair<int,int> > p;

int parent[1001];
int find_parent(int n)
{
    if(parent[n]==n)return n;
    parent[n] =find_parent(parent[n]);
    return find_parent(parent[n]);
}

void kruskal()
{
    int u,v;
    vector<int>vec;
    while(!pq.empty())
    {
        p =pq.top();
        pq.pop();
        u = find_parent(p.second.first);
        v = find_parent(p.second.second);
        //cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
        if(u!=v)
        {
            parent[u] = v;
        }
        else
            vec.push_back(p.first);


    }
    if(vec.empty())
    {
       cout<<"forest"<<endl;
    }
    else{
        int len = (int)vec.size();
        cout<<vec[0];
        for(int i = 1;i<len;i++)
        {
            cout<<" "<<vec[i];
        }
        cout<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int node,edge,u,v,c;
    while(1)
    {
        for(int i = 0;i<1001;i++)
        {
            parent[i] =i;
        }
        cin>>node>>edge;
        if(!node && !edge)break;
        for(int i = 0;i<edge;i++)
        {
            cin>>u>>v>>c;
            pq.push(make_pair(c,make_pair(u,v)));
        }
        kruskal();

    }
    return 0;
}
