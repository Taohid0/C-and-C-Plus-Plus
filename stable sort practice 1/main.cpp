#include <bits/stdc++.h>

using namespace std;

bool compare_as_int(double i,double j)
{

    return (double)(i-(int) i)<(double)(j-(int)j);
}

int main()
{
    double a[] = {3.14, 1.41, 2.72, 4.67, 1.73, 1.32, 1.62, 2.58};

    vector<double>v;
    v.assign(a,a+8);

    stable_sort(v.begin(),v.end());

    for(auto i:v)
        cout<<i<< " ";
    cout<<endl;

    v.assign(a,a+8);

 sort(v.begin(),v.end(),compare_as_int);

    for(auto i:v )
        cout<<i<< " ";
    return 0;
}
