#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[101],n,value;
    memset(value,0,sizeof arr);

    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>value;
        arr[value]++;
    }
    vector<int>v;

    return 0;
}
