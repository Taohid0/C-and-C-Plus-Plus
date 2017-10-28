#include <bits/stdc++.h>

using namespace std;

struct work{
    int profit;
    int deadline;

}w[100];

bool compare(work a,work b)
{
    return a.profit>b.profit;
}

int main()
{ vector<bool>v;
  v.assign(100,false);
    int n;
    int total_profit = 0;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>w[i].profit>>w[i].deadline;
    }

    sort(w,w+n,compare);

    for(int i = 0;i<n;i++)
    {
        for(int j = w[i].deadline;j>=1;j--)
        {
            if(v[j]==false)
            {
                v[j] = true;
                total_profit+=w[i].profit;
                break;
            }
        }
    }
    cout<<total_profit;
    return 0;
}
