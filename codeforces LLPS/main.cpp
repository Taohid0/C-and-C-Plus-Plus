#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int counter = 0,mx = -1;
    for(int i = 0;i<(int)s.size();i++)
    {
        if((int)s[i]>mx)
        {
            mx= (int)s[i];
            counter=1;
        }
        else if((int)s[i]==mx)counter++;
    }
    for(int i = 0;i<counter;i++)cout<<(char)mx;
    return 0;
}
