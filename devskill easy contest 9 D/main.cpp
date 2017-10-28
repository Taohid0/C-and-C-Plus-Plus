#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    getchar();
    for(int i = 0;i<n;i++)
    {
        bool flag =false;
        getline(cin,s);
        int len = (int)s.size();
        for(int j = 0;j<len;j++)
        {
            if(s[j]=='r')
            {
                flag =true;
                break;
            }
        }
        if(flag)cout<<"Not vely easy"<<endl;
        else cout<<"Vely easy"<<endl;
    }
    return 0;
}
