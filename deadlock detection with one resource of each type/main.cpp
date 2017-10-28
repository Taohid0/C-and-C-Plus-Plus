#include <bits/stdc++.h>

using namespace std;



int main()
{
        vector<int>resources,available_resources,deadlocked;
    int current_allocation_matrix[100][100],request_matrix[100][100];
    int n,value,m;

    cout<<"total processes  and resources "<<endl;
    cin>>n>>m;

    for(int i = 1;i<=m;i++)
    {
        cout<<"resource "<<i<<" : ";
        cin>>value;
        resources.push_back(value);
        available_resources.push_back(value);
    }
    cout<<"Enter current allocation matrix"<<endl;

    for(int i = 1;i<=n;i++)
    {

        for(int j =1;j<=m;j++)
        {
            cout<<"For C("<<i<<","<<j<<") :";
            cin>>value;
            current_allocation_matrix[i-1][j-1]=value;
            available_resources[j-1]-=value;
        }

    }
    cout<<endl;
    cout<<"Enter request matrix"<<endl;
    for(int i =1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {
            cout<<"For R("<<i<<","<<j<<") :";
            cin>>value;
            request_matrix[i-1][j-1]=value;

        }
    }
    for(int i=0;i<4;i++)
        cout<<available_resources[i]<<" ";
    cout<<endl;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(request_matrix[i][j]>resources[j])
            {
                deadlocked.push_back(i+1);
                continue;
            }
        }
    }
    if(deadlocked.empty())
    {
        cout<<"\nNo deadlock occurred"<<endl;
    }
    else
    {
        for(auto i: deadlocked)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
