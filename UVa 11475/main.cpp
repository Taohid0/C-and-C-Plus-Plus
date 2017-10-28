#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b[100001],i,j,len,l;

    string s,result;

    while(cin>>s)
    {
        len = (int)s.length();
        i = 0;
        b[0] = -1;
        j =-1;
        while(i<len)
        {
            while(j>=0 && s[j]!=s[i])j = b[j];

             i++,j++;

             b[i] = j;

        }
        result = s.substr(0,len-b[len]-1);
        l = (int)result.length();
        for(int i = l-1;i>=0;i--)
        {
            s+=result[i];
        }
        cout<<s<<endl;

    }
    return 0;
}
