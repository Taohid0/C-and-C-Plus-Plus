#include <bits/stdc++.h>

using namespace std;


bool compare(pair<int,int>i,pair<int,int>j)
{
    if(i.second<j.second)
    {
        return true;
    }
    else if( i.first<i.second){
        return true;
    }
    else return false;
}

int main()
{
  /*  vector< pair<int,int> >p;

   for(int i = 0;i<5;i++)
   {   int a,b;
        cin>>a>>b;
       p.push_back(make_pair(a,b));
   }
   sort(p.begin(),p.end());

   for(int i = 0;i<5;i++)
   {
       cout<<p[i].first<<" "<<p[i].second<<endl;
   }*/

   pair<int,int>pr[100];

for(int i = 0;i<5;i++)
{
    int a,b;
    cin>>a>>b;
    pr[i].first = a;
    pr[i].second = b;
}
  sort(pr,pr+5,compare);

  for(int i = 0;i<5;i++)
  {
      cout<<pr[i].first<< " "<<pr[i].second<<endl;
  }
        return 0;
}
