#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);

    sort(v.rbegin(),v.rend());

    do
    {
        for(int i =0;i<(int)v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }while(next_permutation(v.end(),v.begin()));
    return 0;
}
