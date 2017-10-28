#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,total = 0;
    cin>>a>>b>>c;
    while(1)
    {
        if(a-1>=0 and b-2>=0 and c-4>=0)
        {
            total+=7;
            a-=1;
            b-=2;
            c-=4;
        }
        else break;
    }
    cout<<total<<endl;
    return 0;
}
