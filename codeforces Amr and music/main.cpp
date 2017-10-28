#include <bits/stdc++.h>

using namespace std;

struct info{
int time,index;
}instrument[100005];

bool compare(info a,info b )
{
    return a.time<b.time;
}
int main()
{
    int n,total_time;
    cin>>n>>total_time;
    for(int i = 0;i<n;i++)
    {
        cin>>instrument[i].time;
        instrument[i].index = i+1;
    }
    sort(instrument,instrument+n,compare);
    vector<int>r;
    int total_instrument =0;
    for(int i = 0;i<n;i++)
    {
        if(instrument[i].time<=total_time)
        {
            r.push_back(instrument[i].index);
            total_instrument++;
            total_time-=instrument[i].time;
        }
        else
            break;
    }
    cout<<total_instrument<<endl;
    for(int i = 0;i<total_instrument;i++)
        cout<<instrument[i].index<< " ";
    return 0;
}
