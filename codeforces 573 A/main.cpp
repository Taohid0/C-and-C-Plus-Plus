#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    bool test = true;
    int value;
    vector<int>v;
    cin>>n;
    while(n--)
    {
        cin>>value;
        while(value%2==0)
            value/=2;
        while(value%3==0)
            value/=3;
        v.push_back(value);
    }
    for(int i = 0;i<(int)v.size()-1;i++)
    {
        {
            if(v[i]!=v[i+1]){cout<<"No"<<endl;
            return 0;}
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}
