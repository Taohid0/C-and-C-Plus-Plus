#include <bits/stdc++.h>

using namespace std;

int main()
{
    string temp="";
    string s = "a";
    s+=temp;
    s+="b";

    set<string>st;
    st.insert("a");
    st.insert("");
    st.insert("v");

    for(auto i:st)
    {
        cout<<i;
    }
    return 0;
}
