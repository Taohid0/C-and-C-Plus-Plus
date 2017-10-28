#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,aw=0,bw=0,d=0;
    cin>>a>>b;
    for(int i = 1;i<=6;i++)
    {
        if(abs(i-a)<abs(i-b))
        {
            aw++;
        }
        else if(abs(i-a)>abs(i-b))
        {
            bw++;
        }
        else d++;
    }
    cout<<aw<<" "<<d<<" "<<bw<<endl;
    return 0;
}
