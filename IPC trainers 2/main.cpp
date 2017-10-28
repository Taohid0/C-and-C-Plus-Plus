#include <bits/stdc++.h>

using namespace std;

struct node{
long long int sad,classes;
}info;

int main()
{
    long long int test,trainers,arrival,days,classes,sadness;
    cin>>test;
    while(test--)
    {
        priority_queue<pair<long long int,long long int> >pq;
        long long int  total = 0;
        vector<node>v[100005];
        cin>>trainers>>days;

        for(int i = 0;i<trainers;i++)
        {
            cin>>arrival>>classes>>sadness;
            total+=classes*sadness;
            info.classes = classes;
            info.sad=sadness;
            v[arrival].push_back(info);

        }

        for(int i = 1;i<=days;i++)
        {
            for(int j = 0;j<(int)v[i].size();j++)
            {
                pq.push({v[i][j].sad,v[i][j].classes});
            }
            if(!pq.empty()){
            pair<int,int> p = pq.top();
            pq.pop();
            total-=p.first;
            p.second--;
            if(p.second!=0)
                pq.push(p);
            }
            //cout<<i<<" "<<pq.size()<<endl;
        }
        cout<<total<<endl;
    }
    return 0;
}
