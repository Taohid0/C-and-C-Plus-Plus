#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
   scanf("%d\n\n",&n);


    while(n--)
    {
         map<string,int>mp;
       int total=0;
       while(getline(cin,s))
       { if(s=="")break;
           mp[s]++;

         total++;
       }
       map<string,int> ::iterator it;
       for(it=mp.begin();it!=mp.end();it++)
       {
          cout<<it->first<<" ";
          printf("%.4lf\n",(double)it->second*100/(double)total);
       }

       if(n>0)cout<<endl;
    }
    return 0;
}
