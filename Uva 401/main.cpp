#include <bits/stdc++.h>

using namespace std;

 char characters[1000];

bool isPalindrome(string s)
{
    int sg = (int)s.length();
    int lstIndex = sg-1;

    for(int i = 0;i<sg;i++)
    {
        if(s[i]!=s[lstIndex--])
            return false;
    }
    return true;
}

bool isMirror(string s)
{
    int len = (int)s.length();
    int lastIndest = len-1;
    string sbString;
    for(int i = 0;i<len;i++)
    {
        sbString+=s[i];
        sbString[i] = characters[(int)sbString[i]];


    }
    cout<<s<< " "<<sbString<<endl;
    for(int i = 0;i<len;i++)
    {
        if(s[i]!=sbString[lastIndest--])
            return false;

    }
    return true;

}
   //THERE IS AN ERROR IN THIS CODE

int main()
{
    ios::sync_with_stdio(false);

    string s;

    for(int i = 0;i<255;i++)
    {
        characters[i]=  (char)i;
    }
    characters[(int)'E'] = '3';
    characters[(int)'3'] = 'E';
    characters[(int)'L'] = 'J';
    characters[(int)'J'] = 'L';
    characters[(int)'Z'] = '5';
    characters[(int)'5'] = 'Z';
    characters[(int)'2'] = 'S';



    while(getline(cin,s))
    {
        bool a = isPalindrome(s);
        bool b = isMirror(s);

        cout<<a<< " " <<b<<endl;

        if(a&&b)
        {
            cout<<s<< " -- is a mirrored palindrome.\n";
        }
       else if(a&&!b)
        {
            cout<<s<< " -- is a regular palindrome.\n";
        }
        else if(!a&&b)
        {
           cout<<s<< " -- is a mirrored string.\n";
        }
        else
            cout<<s<< " -- is not a palindrome.\n";

       cout<<endl;
    }
    return 0;
}
