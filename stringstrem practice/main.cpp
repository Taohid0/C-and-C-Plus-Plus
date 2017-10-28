#include <bits/stdc++.h>

using namespace std;

int main()
{
     string s;

    getline(cin,s);

    stringstream ss(s);
    int num;
    vector<int>v;

    while(ss>>num)
    {
        v.push_back(num);

    }
    sort(v.begin(),v.end());

    for(int i = 0;i<(int)v.size();i++)
    {
        cout<<v[i]<< " ";
    }
    return 0;
}
