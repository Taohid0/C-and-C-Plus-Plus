#include <bits/stdc++.h>

using namespace std;

struct structure
{
    string job_name;
    int deadline;
    int profit;
    bool day_in_job_to_do = false;
}jobs[100];

bool compare(structure a,structure b)
{
    return a.profit>b.profit;
}

int main()
{
    int n,total_profit = 0;
    string job_sequence[100];
    freopen("a.txt","r",stdin);

    cin>>n;
    for(int i = 1;i<=n;i++)
    {
        cin>>jobs[i].profit>>jobs[i].deadline>>jobs[i].job_name;
    }

    sort(jobs+1,jobs+n+1,compare);

    for(int i  = 1;i<=n;i++)
    {
        for(int j = min(jobs[i].deadline,n);j>=1;j--)
        {
            if(jobs[j].day_in_job_to_do==false)
            {
                job_sequence[i] = jobs[j].job_name;
                jobs[j].day_in_job_to_do= true;
                total_profit+=jobs[j].profit;
                break;
            }
        }
    }
    cout<<"optimal job sequece "<<endl;

    for(int i=1;i<=n;i++)
    {
        cout<<job_sequence[i]<<" ";
    }
    cout<<endl;

    cout<<"total profit  = "<<total_profit;
    return 0;
}
