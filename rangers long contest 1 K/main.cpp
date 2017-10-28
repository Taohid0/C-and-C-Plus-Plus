#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[10000];
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long s[2];
    s[0] = 0,s[1] =0;
    int player = 0;
    int i = 0,j = n-1;

    while(i<=j)
    {
        if(arr[i]>arr[j])
        {
            s[player]+=arr[i];
            i++;
        }
        else
        {
            s[player]+=arr[j];
            j--;
        }
        player= 1-player;
    }
    cout<<s[0]<<" "<<s[1]<<endl;
    return 0;
}
