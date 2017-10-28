#include <bits/stdc++.h>

using namespace std;

int main()
{
 int test;
 bool flag=false;
  cin>>test;
  getchar();

  while(test--)
  {
       getchar();
      vector<string>v;
      vector<pair<int,int> > vp;
      string s1,s2;
      if(flag)cout<<endl;
      getline(cin,s1);
      getline(cin,s2);

      stringstream ss(s1);
      int count=0;
      int indx;
      while(ss>>indx)
      {
          vp.push_back(make_pair(indx,count++));
      }
      stringstream ss2(s2);
      string temp;
      while(ss2>>temp)
      {
          v.push_back(temp);
      }
      sort(vp.begin(),vp.end());

      int sg=(int)vp.size();
      for(int i=0;i<sg;i++)
      {
          cout<<v[vp[i].second]<<endl;
      }
      flag =true;

  }

    return 0;
}
