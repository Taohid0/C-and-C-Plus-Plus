

#include<bits/stdc++.h>
using namespace std;

int main()
{   int  tc;
    string s;
    cin>>tc;
   getchar();
    while(tc--)
    {  getline(cin, s);
        int sl=s.size();
        stack<char>stk;
        for(int i=0;i<sl;i++)
        {
            if(!stk.empty() && s[i]==')' && stk.top()=='(')
                stk.pop();
            else if(!stk.empty() && s[i]==']' && stk.top()=='[')
                stk.pop();
            else stk.push(s[i]);
        }
        if(stk.empty())
            cout<<"Yes\n";
        else cout<<"No\n";
    }

    return 0;
}
