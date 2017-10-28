#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "abcdefghijklmnopqrgstuasvwzyz";

    for(int i = 0;i<=(int)s.length();i+=2){
        string sb = s.substr(i,2);
        cout<<sb<<endl;

    }
    for(int i = (int)s.length()-1;i>=0;i--){
        char sb = s[i];
        cout<<sb;
    }
    cout<<s.length();
    return 0;
}
