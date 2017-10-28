#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;int test;
    cin>>test;
    while(test--)
    {
        cin>>n;
    vector<long long>v;
     bool flag =false;
         if(n<10)cout<<n;
         else
         {
                for(int i = 9;i>=2;i--)
                 {
                     if(n%i==0)
                     {
                         v.push_back(i);
                         n/=i;
                         i=9;
                     }
                 }
               //  cout<<n<<endl;
                if(n<10){if(n!=1)v.push_back(n);}
                else flag = true;

         }
         sort(v.begin(),v.end());
         if(flag)cout<<-1;
          else
            for(int i = 0;i<(int)v.size();i++)
            cout<<v[i];

           cout<<endl;
    }
    return 0;
}
