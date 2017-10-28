#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[1000];
    char *pcn;
    scanf("%s",s);
    vector<int>v;
    pcn= strtok(s,"+");

    while(pcn!=NULL)
    {
        //cout<<pcn<<endl;
        v.push_back(atoi(pcn));
        pcn = strtok(NULL,"+");
    }
    sort(v.begin(),v.end());
    int len = v.size();
    for (int i=0;i<len;i++)
    {
        cout<<v[i];
        if(i<len-1)cout<<"+";
    }
    return 0;
}
