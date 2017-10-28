#include <bits/stdc++.h>

using namespace std;

int main()
{  string s,line;
   int n;
   map<string,int>mp;
   cin>>n;

   while(n--){
    cin>>s;
    getline(cin,line);
    mp[s]++;
 //   st.insert(s);

   }
   for(map<string,int>::iterator itr = mp.begin();itr!=mp.end();itr++){
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
   }
    return 0;
}
