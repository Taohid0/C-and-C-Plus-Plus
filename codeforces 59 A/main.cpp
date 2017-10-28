#include <iostream>

using namespace std;

int main()
{
    int low=0,high = 0;
    string s;
    cin>>s;
    int len = (int)s.size();
    for(int i =0;i<len;i++)
    {
        if(s[i]<='Z')high++;
        else low++;
    }
    if(high<=low)
    {
        for(int i =0;i<len;i++)
            cout<<(char)tolower(s[i]);
    }
    else
    {
        for(int i = 0;i<len;i++)
            cout<<(char)toupper(s[i]);
    }
    return 0;
}
