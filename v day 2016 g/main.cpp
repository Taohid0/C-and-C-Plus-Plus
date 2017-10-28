#include <bits/stdc++.h>

using namespace std;

int main()
{ios_base::sync_with_stdio(false);cin.tie(0);
    long long n,value;
    vector<long long>v1;
    cin>>n;
      unsigned long long n1=0,n2=0;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        v1.push_back(value);
    }
     for(int i=0;i<n;i++)
    {
        cin>>value;
        //v2.push_back(value);
        n1+=abs(v1[i]-value);
    }
     for(int i=0;i<n;i++)
    {
        cin>>value;
       // v3.push_back(value);
        n2+=abs(v1[i]-value);
    }
   // cout<<n1<<" "<<n2<<endl;
    if(n1<=n2)cout<<"Yan"<<endl;
    else cout<<"MaratonIME"<<endl;

    return 0;
}
