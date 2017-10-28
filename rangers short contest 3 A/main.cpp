#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;
    vector<long long>v;
    cin>>n>>k;

    for(long long  i =1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i*i!=n)
            {
                v.push_back(n/i);
            }


            //cout<<i<<" "<<n/i<<endl;
        }
    }

    sort(v.begin(),v.end());
    //for (auto i:v)
      //  cout<<i<<" ";
    if((int)v.size()<k)
        cout<<-1<<endl;
    else
        cout<<v[k-1]<<endl;
    return 0;
}
