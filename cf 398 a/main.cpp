#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,value,temp;
    priority_queue<int>pq;
    cin>>n;
    temp = n;
    for(int i = 0;i<n;i++)
    {
        cin>>value;
        pq.push(value);
        if(value==temp)
        {
            cout<<temp;
            pq.pop();
            temp--;
            while(true)
            {
                if(pq.empty())break;
                if(temp==pq.top())
                    {cout<<" "<<pq.top();
                      pq.pop();
                      temp--;
                    }
                else break;
            }

        }
        if(i!=n-1)cout<<endl;
    }
    return 0;
}
