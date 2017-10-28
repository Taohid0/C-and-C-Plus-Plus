#include <bits/stdc++.h>

using namespace std;

bool test_palindrome(string s,int i,int len)
{
    cout<<i<<" "<<len<<endl;
    for(int j=0;j<=i;j++)
    {
        if(s[j]!=s[len-j-1])return false;
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    int len = (int)s.size();
    int i;
    for( i = len-1;i>=0;i--)
    {
        if(s[i]!='0')break;
    }
    bool flag = test_palindrome(s,i,len);
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
