#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,counter = 0,value;
    cin>>a>>b;
    while(a--)
    {
        cin>>value;
        if(value<=5-b)counter++;
    }
    cout<<counter/3<<endl;
    return 0;
}
