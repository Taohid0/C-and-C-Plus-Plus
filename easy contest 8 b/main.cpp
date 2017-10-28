#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,test;
   cin>>test;
   getchar();
   for (int i=1;i<=test;i++)
   {
       string s;
       getline(cin,s);
       stringstream ss(s);
       int num; vector<int>v;
       while(ss>>num){
         v.push_back(num);
       }

       sort(v.begin(),v.end());
       cout<<"Case "<<i<<": Among "<<v.size()<<" numbers "<<v[v.size()-1] <<" is maximum and "<<v[0]<<" is minimum"<<endl;
   }
    return 0;
}
