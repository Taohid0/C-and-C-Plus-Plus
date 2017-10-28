#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    string s = "123";

    int totalCombination = 1<<3;

    for(int i = 1;i<totalCombination;i++)
    {     int pos = 2;
          int bitmask = i;
          vector<char>v;
        while(bitmask>0)
        {
            if(bitmask & 1)v.push_back(s[pos]);
            pos--;
            bitmask>>=1;
        }
        sort(v.begin(),v.end());
        for (auto i:v)cout<<i<< " ";
        cout<<endl;
    }
    return 0;
}
