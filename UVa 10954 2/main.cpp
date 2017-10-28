#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,value,cost,total;


    while(true)
    {total = 0;
    cost = 0;
     priority_queue<int>pq;
        cin>>n;
        if(!n)break;

        for(int i = 0;i<n;i++)
        {
            cin>>value;
            pq.push(-value);
        }

        while(int(pq.size())>1)
        {
            total = pq.top();pq.pop();
            total+=pq.top();pq.pop();
            cost+=total;
            pq.push(total);
        }
        cout<<-cost<<endl;
    }
    return 0;
}
