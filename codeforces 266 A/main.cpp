#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,counter = 0;
    string s;
    cin>>n>>s;
    for(int i = 1;i<n;i++)
    {
        if(s[i]==s[i-1])counter++;
    }

    cout<<counter<<endl;
    return 0;
}
