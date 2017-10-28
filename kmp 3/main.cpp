#include <bits/stdc++.h>

using namespace std;

int b[100];

void kmpPreprocess(string s)
{
    int m = (int)s.size();
    int i = 0,j= -1;
    b[0] = -1;

    while(i<m)
    {
        while(j>=0 && s[i]!=s[j])j = b[j];
        i++,j++;
        b[i] = j;
    }
}

void kmp(string t,string p)
{   int i,j;
    int n = (int)t.size();
    j = i = 0;
    int m = (int)p.size();

    while(i<n){
    while(j>=0 && t[i]!=p[j])j = b[j];

    i++,j++;
    if(j==m)
    {

        j = b[j];
    }
    }
}

int main()
{
    string t,p;

    getline(cin,t);
    getline(cin,p);

    kmpPreprocess(p);
    kmp(t,p);

    return 0;
}
