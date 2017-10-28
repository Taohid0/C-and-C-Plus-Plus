#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int,vector<int>, greater<int> >pq;
    pq.push(10);
    pq.push(15);
    int t;
    while(!pq.empty())
    {
        t= pq.top();
        pq.pop();
        cout<<t<<endl;
    }
    return 0;
}
