#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,x,y;
    cin>>p>>x>>y;

    vector<int>v;
//    i := (s div 50) mod 475
//repeat 25 times:
//    i := (i * 96 + 42) mod 475
//    print (26 + i)

    int i = (x/50) % 475;

    for (int j=1;j<=25;j++)
    {
        i=(i*96+42)%475;
        v.push_back(i+26);
        cout<<i+26<<" ";
    }
    sort(v.begin(),v.end());
    int l = v[0];
    if(y>=l)
    {
        cout<<0<<endl;
        return 0;
    }

    int to_gain = ceil((l-y)/100);
    cout<<to_gain<<endl;
    return 0;
}
