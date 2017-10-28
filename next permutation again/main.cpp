#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string>amra;

    amra.push_back("rumpa");
    amra.push_back("taohid");
    amra.push_back("farhana");
    amra.push_back("akash");
    amra.push_back("dip");

    sort(amra.rbegin(),amra.rend());

    do
    {
        for(int i = 0;i<(int)amra.size();i++)
        {
            cout<<amra[i]<<" ";
        }
        cout<<endl;
    } while(prev_permutation(amra.begin(),amra.end()));

    return 0;
}
