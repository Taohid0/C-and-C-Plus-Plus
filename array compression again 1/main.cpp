#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v[1000],v2;
    int test,inpt;

    cout<<"how many numbers do you want to enter?"<<endl;
    cin>>test;

    for(int i = 0;i<test;i++)
    {
        cin>>inpt;

        v[inpt].push_back(i);

        if(find(v2.begin(),v2.end(),inpt)==v2.end())
        {

        v2.push_back(inpt);

    }}
    sort(v2.begin(),v2.end());


    for(int i = 0;i<(int)v2.size();i++)
    {
        int x= v2[i];

         cout<<x<< " = : ";
        for(int j = 0;j<(int)v[x].size();j++)
        {
            cout<<v[x][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
