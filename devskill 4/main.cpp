#include <bits/stdc++.h>

using namespace std;

int main()
{
   int test;
   cin>>test;
    getchar();
   string s;
   vector<string>v;
   for(int i=0;i<test;i++)
   {
       cin>>s;
       v.push_back(s);
   }
   for(int i=1;i<=test;i++)
   {
    s=v[i-1];
    char testChar;
    bool flag=false;
    if(s[0]=='0'){
        testChar=s[2];   flag=true;
       // cout<<testChar<<endl;
    }
    else{
        testChar=s[4];

    }
    if(flag)cout<<"88";
    cout<<s<<" ";
    if(testChar=='1')cout<<"Citycell";
    else if(testChar=='5')cout<<"Teletalk";
    else if(testChar=='6')cout<<"Airtel";
    else if(testChar=='7')cout<<"Grameenphone";
    else if(testChar=='8')cout<<"Robi";
    else cout<<"Banglalink";
    cout<<endl;
    flag=false;

   }
    return 0;
}
