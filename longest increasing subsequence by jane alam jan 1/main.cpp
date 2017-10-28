#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numbers[100];
    int sequence[100];
    int n;

    cout<<"how many numbers do you want to enter ?";
    cin>>n;
    for(int I = 0;I<n;I++)
    {
        sequence[I] = 1;
    }

    for(int i = 0;i<n;i++)
    {
        cin>>numbers[i];
    }

    for(int I = 0;I<n;I++)
    {
        for(int j = I+1;j<n;j++)
        {
            if(numbers[j]>numbers[I])
            {
                if(sequence[j]<sequence[I]+1)
                {
                    sequence[j] = sequence[I]+1;
                }
            }
        }
    }
    int highest = -1;

    for(int I = 0;I<n;I++)
    {
       if(sequence[I]>highest)
       {
           highest = sequence[I];
       }
    }
    cout<<highest;
    return 0;
}
