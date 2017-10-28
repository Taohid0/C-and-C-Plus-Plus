#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v1,v2;

    v1.push_back(10);
    v1.push_back(15);
    v1.push_back(20);

    //v1 = v2;

    for(vector<int>::iterator itr = v1.begin();itr!=v1.end();itr++){
        printf("%d ",*itr);
    }
    return 0;
}
