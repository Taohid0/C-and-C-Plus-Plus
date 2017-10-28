#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int>mylist;

    mylist.push_back(10);
    mylist.push_front(5);

    list<int>::iterator it;
    it = mylist.begin();
    it++;
    mylist.insert(it,2);

    for(auto i:mylist)
    {
        cout<<i<<" ";
    }

    return 0;
}
