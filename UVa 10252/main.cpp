#include <bits/stdc++.h>

using namespace std;

int main()
{

char s1[1010],s2[1010];
    map<char, int>freq;
    while(gets(s1))
    {
        gets(s2);
        int l1=strlen(s1);
        sort(s1,s1+l1);
        int l2=strlen(s2);
        sort(s2,s2+l2);

        freq.clear();

        for(int i=0;i<l1;i++)
            freq[s1[i]]++;
        for(int i=0;i<l2;i++)
            if(freq[s2[i]])
            {
                cout<<s2[i];
                freq[s2[i]]--;
            }
        cout<<endl;
    }
}
