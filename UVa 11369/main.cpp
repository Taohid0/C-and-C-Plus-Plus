#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int test,r,arr[100000],items;
    cin>>test;
    while(test--)
    {
        cin>>items;
        for(int i = 0;i<items;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+items,std::greater<int>());
        r = 0;
        for(int i = 2;i<items;i+=3)
        {
            r+=arr[i];
        }
        cout<<r<<endl;
    }
    return 0;
}
