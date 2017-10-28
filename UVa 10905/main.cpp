#include <bits/stdc++.h>

using namespace std;

bool compare(string x,string y)
{
    return x+y<y+x;
}

int main()
{
   long long n;
   string inpt;
   vector<string>v;
   while(cin>>n)
   {
       if(n==0)break;
       for(int i=0;i<n;i++)
       {
           cin>>inpt;
           v.push_back(inpt);
       }
      sort(v.begin(),v.end(),compare);
       for(int i=n-1;i>=0;i--)
       {
           cout<<v[i];
       }
       v.clear();
       cout<<endl;
   }
    return 0;
}
