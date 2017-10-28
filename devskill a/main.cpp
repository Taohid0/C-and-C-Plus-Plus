#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long  test,n,value,m;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        cin>>n;
       priority_queue<pair<long long ,long long> >pq;
      for(int j=0;j<n;j++) {
        cin>>value>>m;
        pq.push(make_pair(-1*value,-1*m));
      }
      pair<long long,long long>r=pq.top();

     // printf("Case %ld: %ld %ld\n",i,-1*r.first,-1*r.second);
      cout<<"Case "<<i<<": "<<-r.first<<" "<<-r.second<<endl;

    }
    return 0;
}
