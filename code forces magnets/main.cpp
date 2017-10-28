#include <bits/stdc++.h>

using namespace std;
string arr[1000000];
int main()
{

    int n;
    int counter = 1;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i = 1;i<n;i++)
    {
        if(arr[i][0]==arr[i-1][1])counter++;
    }
    cout<<counter;
    return 0;
}
