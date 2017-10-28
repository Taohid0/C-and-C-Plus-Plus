#include <bits/stdc++.h>

using namespace std;

int n,numbers[100],L[100];

int LIS()
{ int maximum= -1;
    for(int i = 0;i<n;i++)
    {
        L[i] = 1;
    }

    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(numbers[j]>numbers[i])
            {
                if(L[j]<L[i]+1)
                {
                    L[j] = L[i]+1;
                }
            }
        }
    }

    for(int i = 0;i<n;i++)
    {
        if(maximum<L[i])
        {
            maximum = L[i];
        }
    }
    return maximum;
}

int main()
{
    cout<<"How many numbers do you want to enter ?";
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>numbers[i];
    }
    int result = LIS();

    cout<<result;

            return 0;
}
