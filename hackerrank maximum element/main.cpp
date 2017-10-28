#include <bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int>pq;
    int n,a,value;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
        {
            cin>>value;
            pq.push(value);
        }
        else if(a==2)
        {
            pq.pop();
        }
        else{
            int v =pq.top();
            cout<<v<<endl;
        }
    }

    return 0;
}
