#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,value,total = 0,unrated = 0;
    cin>>n;

    while(n--)
    {
        cin>>value;
        total+=value;
        if(total<0)
        {
            unrated++;
            total = 0;
        }
    }
    cout<<unrated<<endl;
    return 0;
}
