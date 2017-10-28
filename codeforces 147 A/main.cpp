#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int len = (int)s.size();
    bool isComma= false,isSpace=false,isprnt = false;
    for(int i = 0;i<len;i++)
    {

        while(!isalpha(s[i]))
        {
            if(s[i]==',')isComma = true;
            else isSpace =true;
            i++;
            if(i==len)return 0;
        }
        if(isalpha(s[i])){
        if(isprnt and isComma){cout<<", ";isComma =false;isSpace= false;}
        else if(isprnt and isSpace){cout<< " ";isSpace =false;}
        cout<<s[i];isprnt=  true;isSpace =false;isComma =false;}

    }
    return 0;
}
