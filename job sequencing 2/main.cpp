#include <bits/stdc++.h>

using namespace std;

struct structure{
                  int profit;
                  int deadline;
                  }jobs[100];


bool compare(structure a,structure b)
{
    return a.profit>b.profit;
}

int main()
{
    int total_profit = 0;
    int n;
    bool slot[100] = {false};
    cin>>n;

    for(int i =0;i<n;i++)
    {
        cin>>jobs[i].profit>>jobs[i].deadline;
    }

    sort(jobs,jobs+n,compare);

    for(int i = 0;i<n;i++)
    {
        for(int j = min(jobs[i].deadline,n);j>=1;j--)
        {
            if(slot[j]==false)
            {
                slot[j]= true;
                total_profit+=jobs[i].profit;
                break;
            }
        }
    }
        cout<<total_profit;
    return 0;
}
