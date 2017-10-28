#include <bits/stdc++.h>

using namespace std;

int main()
{
    string qwerty = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ ~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    string dvorak = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg' ~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";

    string s;

    while(getline(cin,s))
    {
        int sg = (int)s.size();

        for(int i = 0;i<sg;i++)
        {
            char c = s[i];

            for(int j = 0;j<96;j++)
            {
                if(c==qwerty[j])cout<<dvorak[j];
            }
        }
        cout<<endl;
    }

    return 0;
}
