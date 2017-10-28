#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int len;
    getline(cin,s);
        len = (int)s.size();
        for(int i =0;i<len;i++)
        {
            if(s[i]!=' ')
            {
                cout<<s[i];
            }
        }
        cout<<endl;

    return 0;
}
