#include <bits/stdc++.h>

using namespace std;

int n,sequence[100],L[32];

int LIS()
{
    for(int i= 0;i<n;i++)
    {
        L[i] =1;
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(sequence[j]>sequence[i])
            {
                if(L[j]<L[i]+1)
                {
                    L[j] = L[i]+1;
                }
            }
        }
    }
    int maximum = -1;
    for(int i = 0;i<n;i++)
    {
        if(L[i]>maximum)
        {
            maximum = L[i];
        }
    }
    return maximum;
}

int main()
{

    cout << "how many number do you want to enter ? " << endl;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>sequence[i];
    }
    int result = LIS();

    while(result--)
    {
        for(int i = 0;i<n;i++)
        {
        if(L[i]==result)
        {
            cout<<sequence[i]<<" ";

        }
        }
    }
    return 0;
}
