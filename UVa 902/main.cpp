#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sbstr, s;
    int len,N;
    map<string,int>mp;

    while(cin>>N)
    {
        getchar();
      cin>>s;
      len = (int)s.size();
     for(int i = 0;i<len-N;i++)
     {
         sbstr = s.substr(i,N);
         mp[sbstr]++;

     }
     len = (int)mp.size();
     int fre = -1;

     for(auto i:mp)
         if(fre<i.second)s = i.first,fre=i.second;

        cout<<s<<endl;
        mp.clear();
    }
    return 0;
}
