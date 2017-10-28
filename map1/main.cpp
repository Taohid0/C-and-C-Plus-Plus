#include <bits/stdc++.h>

using namespace std;

int main()
{   map<string,int>m;
    string str;

    while(cin>>str){
        if(str=="end"){
            break;
        }
        m[str]++;

    }
    cout << str << " " << m[str] << endl;
    return 0;
}
