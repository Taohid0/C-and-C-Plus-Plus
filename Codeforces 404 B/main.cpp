#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<long long>n1,n2,m1,m2;
    long long n,m,value1,value2;
    cin>>n;
    while(n--)
    {
        cin>>value1>>value2;
        n1.push_back(value1);
        n2.push_back(value2);
    }
    cin>>m;
    while(m--)
    {
        cin>>value1>>value2;
        m1.push_back(value1);
        m2.push_back(value2);
    }
    sort(n1.begin(),n1.end());
    sort(n2.begin(),n2.end());
    sort(m1.begin(),m1.end());
    sort(m2.begin(),m2.end());
    long long r = 0;
    r = m1[m1.size()-1]-n2[0];
    long long r2 = n1[n1.size()-1]-m2[0];
    //cout<<r<<" "<<r2<<endl;

    if(r>r2 and r>0)cout<<r<<endl;
    else if(r2>0)cout<<r2<<endl;
    else cout<<0<<endl;
    return 0;
}
