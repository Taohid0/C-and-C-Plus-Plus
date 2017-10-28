#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
#include<map>
#include<set>
#include<vector>

using namespace std;

int main()
{
    bool now=false;
    char s[1010];
    int l,i,j;

    while(gets(s))
    {
        if(now)
            printf("n");
        map<char, int> count;
        std::map<char, int>::iterator it;
        set<char> val[1010];
        set<int> v;

        l = strlen(s);
        i=j=0;
        while(i<l)
        {
            count[s[i]]++;
        i++;
        }

        it=count.begin();
        while(it!=count.end())
        {
            val[it->second].insert(it->first);

            if(v.find(it->second) == v.end())
            v.insert(it->second);
        ++it;
        }

        std::set<int>::iterator vit;

        vit=v.begin();
        while(vit!=v.end())
        {
            std::set<char>::reverse_iterator sit;
            sit=val[*vit].rbegin();
            while(sit != val[*vit].rend())
            {
                cout << toascii(*sit) << " " << *vit << endl;
            ++sit;
            }
        ++vit;
        }
        now=true;
    }

    return 0;
}
