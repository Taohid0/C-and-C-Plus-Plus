#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int>l;
    //l.insert(l.begin(),10);
    l.insert(l.insert(l.begin(),3),2);



    for(auto i:l)cout<<i<< " ";
    return 0;
}
