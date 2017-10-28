#include <bits/stdc++.h>

using namespace std;

bitset<10000>bs;
void sieve()
{
    bs[0] =1;
    bs[1]=1;
    for(int i= 2;i<=100;i++)
    {
        if(!bs[i])
            for(int j= i*i;j<=10000;j+=i)
        {
            bs[j]=1;
        }
    }

}

int main()
{
    sieve();
    string s;
    map<char,int>mp;
    int test;
    bool flag =true;
    cin>>test;
    getchar();
    for(int i = 1;i<=test;i++)
    {   flag =true;
        cin>>s;
        int len = (int)s.size();
        for(int j =0;j<len;j++)
        {
            mp[s[j]]++;
        }
        cout<<"Case "<<i<<": ";
        for(auto I:mp)
            if(!bs[I.second])cout<<I.first,flag =false;

          if(flag)cout<<"empty";
        cout<<endl;
        mp.clear();
    }
    return 0;
}
