#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;

    v.push_back(10);
    v.push_back(13);
    v.push_back(54);
    v.push_back(66);
    v.push_back(64);
    v.push_back(66);
    v.push_back(64);
    v.push_back(10);

    sort(v.begin()+3,v.end());
    v.erase(v.begin()+2,v.end());
    v.insert(v.begin()+1,20);

    for(vector<int>::iterator itr = v.begin();itr!=v.end();itr++){
        printf("%d \n",*itr);
    }
    return 0;
}
