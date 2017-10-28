#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int>v {1,2,3,-1,-2,-3};
    cout<<v.back();
    for (auto i:v)cout<<i<<" ";
    cout<<endl;
    int sizeOfVector = 6;
    cout<<endl;
    cout<<*min_element(v.begin()+2,v.begin()+5);


    return 0;
}
