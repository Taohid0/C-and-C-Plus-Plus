#include <bits/stdc++.h>

using namespace std;

bool Triangular(int n) {
    std::vector<int>v;
    int count = 2;
    v.push_back(1);
    for(int i = 1;i<4000;i++)
    {
        v.push_back(v[i-1]+count++);
    }
    if(v[n-1]+v[n-2]==n)return true;
    return false;
}
int main()
{
    cout<<Triangular(45);
    return 0;
}
