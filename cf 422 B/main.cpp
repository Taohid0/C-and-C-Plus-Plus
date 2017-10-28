#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    string s,t;
    cin>>a>>b>>s>>t;
    vector<int>r;
    int mn = INT_MAX;
    for(int i=0;i<b;i++)
    {
        int counter=0;
        vector<int>temp;
        for(int j = 0;j<a;j++)
        {
            if(s[j]!=t[i+j])
            {
                temp.push_back(j+1);
                counter++;
            }
        }
        if(counter<mn)
        {
            mn = counter;
            r = temp;
        }

    }
    cout<<mn<<endl;
    for(auto i:r)
    cout<<i<<" ";
    return 0;
}
