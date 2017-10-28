#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;

    for(int i  = 0;i<5;i++)
    {
        int n;
        cin>>n;
        v.push_back(n);
    }
    do{
        for(int i = 0;i<5;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }while(next_permutation(v.begin(),v.end()));
    return 0;
}
