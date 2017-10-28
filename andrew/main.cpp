#include <bits/stdc++.h>

using namespace std;

int main()
{  int n,score;
string name;
cin>>n;
   map<string,int>mp;
    while(n--){
            cin>>name>>score;
            mp[name]+=score;
    }
   for( map<string,int>::iterator itr = mp.begin();itr!=mp.end();itr++)
{
    cout<< itr ->first << " " << itr ->second<<endl;

}
 return 0;
}
