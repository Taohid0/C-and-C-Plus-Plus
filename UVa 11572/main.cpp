#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        map<long int,long int>mp;
        long int value;
        for(int i=0;i<n;i++)
        {
            cin>>value;
            mp[value]=1;
        }
        cout<<(int)mp.size()<<endl;
    }
    return 0;
}
