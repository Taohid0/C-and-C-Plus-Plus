#include <bits/stdc++.h>

using namespace std;

int main()
{ ios_base::sync_with_stdio(false);cin.tie(0);
    long long n;
    priority_queue<pair<long long ,long long> > pq;
    cin>>n;
    long long value;
    pair<long long,long long>r1,r2;
    for(long long i=1;i<=n;i++)
    {
        cin>>value;
        pq.push(make_pair(value,i));
    }
    r1=pq.top();
    pq.pop();
    r2=pq.top();

    if(r1.first==r2.first)cout<<-1<<endl;
    else cout<<r1.second<<endl;
    return 0;
}
