#include <bits/stdc++.h>

using namespace std;

int main()
{   vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);


    for (vector<int>::iterator itr = v.begin();itr!=v.end();itr++){
        cout<<*itr<<endl;
    }
    v.resize(10);
    cout<<"after resize : " << v.size()<< endl;
    cout << v.size() << endl;
    return 0;
}
