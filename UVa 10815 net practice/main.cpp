#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string>res;
    string s;
    while(cin>>s)
    {
        string p="";
        int l=s.size();
        for(int i=0;i<=l;i++){
           if(isalpha(s[i])){
            p+=tolower(s[i]);
           }
           else if(p!=""){
           res.insert(p);
           p="";
           }
        }
    }
    for (std::set<string>::iterator it=res.begin(); it!=res.end();it++)
    cout<<*it<<endl;

    return 0;
}
