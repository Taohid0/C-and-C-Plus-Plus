#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    int sz;
    map<char,int>m;
   cin>>n;
    getchar();

        while(n--)
        {
            getline(cin,s);
            sz =(int) s.size();

            for(int i = 0;i<sz;i++)
            {   if((s[i]<='z'&& s[i]>='a') || (s[i]<='Z'&& s[i]>='A')){
                m[toupper(s[i])]++;
            }
            }
        }
        for(map<char,int> :: iterator it = m.begin();it!=m.end();it++)
        {
            cout<<it->first<< " "<<it->second<<endl;
        }

    return 0;
}
