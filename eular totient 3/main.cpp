#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[1000];

    for(int i=2;i<1000;i++)
    {
        arr[i]=i;
    }
    for(int i=2;i<1000;i++)
    {
        if(arr[i]==i)
        {
            for(int j = i*2;j<1000;j+=i)
            {
                arr[j]-=arr[j]/i;
            }
        }
    }
    cout<<arr[120];
    return 0;
}
