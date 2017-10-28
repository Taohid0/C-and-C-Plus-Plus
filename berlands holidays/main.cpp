#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,minimum,maximum;
    cin>>n;

    int weeks =n/7;
    minimum= weeks*2;
    maximum = weeks*2;
    int remaining_days= n%7;
    if(remaining_days>5)
    {
        minimum+=remaining_days-5;
    }

    if(remaining_days==1)
    {
        maximum+=1;
    }
    else if(remaining_days>=2)
    {
        maximum+=2;
    }

    cout<<minimum<< " "<<maximum;
    return 0;
}
