#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,inpt;
    vector<int>v;
    vector<int>result;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>inpt;
        v.push_back(inpt);
    }
    int sum = 0;
    bool flag =true;int mul;
    for(int I=  n-1;i>=0;i--)
    {
        if(!flag)
        {
            mu = mul*-1;
        }
        int tmp = v[I]
        flag = !flag;
    }
    return 0;
}
