#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long n;
    vector<long long>v;
    while(cin>>n)
    {
        v.push_back(n);

    }
    for(int i=(int)v.size()-1;i>=0;i--)
    {
        double sq = sqrt(v[i]);
        printf("%.4lf\n",sq);
    }
    return 0;
}
