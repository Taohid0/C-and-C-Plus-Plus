#include <bits/stdc++.h>

using namespace std;

int main()
{
   vector<pair<int,int> >v;
   int arr[200];
     string s;
     int len;

     while(getline(cin,s))
     {
         memset(arr,0,sizeof(arr));
         len  =(int)s.size();
         for(int i = 0;i<len;i++)
         {
             if((s[i]>='a' && s[i]<='z' )||(s[i]>='A' && s[i]<='Z'))
               arr[s[i]]++,v.push_back(make_pair(arr[s[i]],-s[i]));
         }
         sort(v.begin(),v.end(),greater<pair<int,char > >());
         int f = v[0].first;
         len =v.size();
         for(int i = 0;i<len;i++)
         {
             if(v[i].first==f)
             {
                 cout<<(char)-v[i].second;
             }
             else break;
         }
         cout<<" "<<v[0].first<<endl;
         v.clear();
     }
    return 0;
}
