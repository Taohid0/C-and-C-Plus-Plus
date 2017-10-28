#include <bits/stdc++.h>

using namespace std;

bitset<1000001>bs;
vector<int>v;
//ei problem tay net er code diyechilam
void sieve()
{
    for(int i = 2;i<=1001;i++)
    {
        if(!bs[i])
        for(int j =i*i;j<=1000001;j+=i)
        {
            bs[j] = true;
        }
    }
    for(int i= 2;i<=1000001;i++)
    {
        if(!bs[i])v.push_back(i);
    }
}

int main()
{
    sieve();
    int first,last;
    ios::sync_with_stdio(false);
    int len = (int)v.size();
    while(cin>>first>>last)
    {
        //if(first>last)swap(first,last);
        int cnt = 0;
        int m1,m2,l1,l2;
        int lestDiff = 999999;
        int mostDiff = -1;
        for(int i =0;i<len-1;i++)
        {
            if(v[i+1]>last)
            {
                if(v[i]<=last)cnt++;
                break;
            }
            if(v[i]<first)continue;
            if(v[i+1]<=last)
            {
                if(mostDiff<v[i+1]-v[i]){mostDiff = v[i+1]-v[i];
                  m1 = v[i];
                  m2 = v[i+1];
                }
                if(lestDiff>v[i+1]-v[i]){
                        lestDiff =v[i+1]-v[i];
                         l1 = v[i];
                         l2 =v[i+1];
            }

        } cnt++;}
       // cout<<cnt<<endl;
        if(cnt>=2)
        {
           cout<<l1<<","<<l2<<" are closest, "<<m1<<","<<m2<<" are most distant."<<endl;

        }
        else
            cout<<"There are no adjacent primes."<<endl;

    }
    return 0;
}
