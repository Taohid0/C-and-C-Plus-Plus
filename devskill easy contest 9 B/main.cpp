#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    getchar();
    for(int i = 0;i<n;i++)
    {
        getline(cin,s);
        int len = (int)s.size();
        long long r = 0;
        for(int j =0;j<len;j++)
        {
            r = (r*10+(s[j]-'0'))%100000;
        }
        cout<<r<<endl;
    }
    return 0;
}
