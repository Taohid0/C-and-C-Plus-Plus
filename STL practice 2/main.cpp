#include <bits/stdc++.h>

using namespace std;

int main()
{   vector<int>col;
    vector< vector <int> > row;
    col.push_back(512);   col.push_back(520);   col.push_back(50);   col.push_back(5000);
      sort(col.begin(),col.end());
    row.push_back(col);
    vector<int> :: iterator it1;
    vector < vector < int >  > :: iterator it2;

    for(it2 = row.begin();it2!=row.end();it2++){
        for(it1 = col.begin();it1!=col.end();it1++){
            cout<<*it1<<  "  " ;
        }
    }


    return 0;
}
