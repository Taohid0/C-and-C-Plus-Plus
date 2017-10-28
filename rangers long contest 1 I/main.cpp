#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(s1==s2)cout<<"YES"<<endl;
    else{
        int hf = (int)s1.size()/2;
        string sb1 = s1.substr(0,hf);
        string sb2 = s1.substr(hf+1,hf);
        string sb3 = s2.substr(0,hf);
        string sb4 = s2.substr(hf+1,hf);
        if(sb1==sb3 and sb2==sb4)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
