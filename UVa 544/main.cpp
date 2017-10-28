#include <bits/stdc++.h>

using namespace std;

vector<int>parent(20000);

struct data{
      int u,v,weight;

      bool operator < (const data & p)const
      {
          return weight<p.weight;
      }
      };
priority_queue<data>pq;

int pFind(int r)
{
    if(parent[r]==r)
    {
        return r;
    }
    parent[r] = pFind(parent[r]);

    return pFind(parent[r]);
}
int kruskal(int src,int node)
{
    int result = 0;
    int cnt = 0;
   while(!pq.empty())
   {
       data t = pq.top();
       pq.pop();


       int t1 = pFind(t.u);
       int t2 = pFind(t.v);
       if(t1!=t2)
       {
           parent[t1] = t2;
           result+=t.weight;
           cnt++;
       }
       if(cnt-1==node){

        return result;
       }
   }

   return result;
}

int main()
{   map<string,int>mp;
     int index = 0;
     int n,e,weight,cs = 1;
     string c1,c2,src,des;
     data d;
     for(int i =0;i<20000;i++)
     {
         parent[i]=i;
     }

    while(true)
        {
             cin>>n>>e;
             if(!n&&!e)break;

          while(e--)
          {
              cin>>c1>>c2>>weight;
              if(mp.find(c1)==mp.end())
              {
                  mp[c1] = index++;
              }
              if(mp.find(c2)==mp.end())
              {
                  mp[c2] = index++;
              }
               cout<<mp[c1]<< " "<<mp[c2]<<endl;

                d.u = mp[c1];
                d.v =mp[c2];
                d.weight = weight;
                pq.push(d);

          }

          cin>>src>>des;


         int result = kruskal(mp[src],n);

          cout<<"Scenario #"<<cs++<<endl;
          cout<<result<<" tons"<<endl;
    }
    return 0;
}
