#include <bits/stdc++.h>

using namespace std;

int main()
{
    float *x;
    x = new float[5];

    for(int i = 0;i<10;i++)
    {
        x[i] = i;
    }
    for(int i =0;i<10;i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}
