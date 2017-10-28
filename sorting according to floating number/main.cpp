#include <bits/stdc++.h>

using namespace std;

bool compare(double i,double j)
{
    return (i-(int)i)<(j-(int)j);
}

int main()
{
    double arr[] = {3.14, 1.41, 2.72, 4.67, 1.73, 1.32, 1.62, 2.58};

    sort(arr,arr+8,compare);

    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}
