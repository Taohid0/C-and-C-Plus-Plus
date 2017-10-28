#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("b.txt","w",stdout);
    string s = "Iloveyoubird";
    sort(s.begin(),s.end());
    do{
        int len = (int)s.size();
        for(int i = 0;i<len;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}
