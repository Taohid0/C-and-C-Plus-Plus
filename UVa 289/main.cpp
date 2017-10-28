#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    int sg = (int)s.length();
    int last_index = sg-1;

    for(int i = 0;i<sg;i++)
    {
        if(s[i]!=s[last_index])
            return false;
        last_index--;
    }
    return true;
}


int main()
{
    ios::sync_with_stdio(false);


    string s,sbString;
    int counter,sg;
    set<string>st;
    set<string>::iterator tempString;
    while(getline(cin,s))
    {
       counter = 0;
        sg = (int)s.length();



        for(int i = 0;i<sg;i++)
        {
            for(int j=1;j<=sg;j++)
            {
                sbString = s.substr(i,j);

                  st.insert(sbString);

            }
        }

        while(!st.empty())
        {
            tempString = st.begin();

            if(isPalindrome(*tempString))
            {
                counter++;
            }
            st.erase(st.begin());
        }
        cout<<"The string '"<<s<<"' contains "<<counter<< " palindromes.\n";


    }
    return 0;
}
