#include <bits/stdc++.h>

using namespace std;

string t,p;
int lenText,lenPattern,b[100];

void kmpPreprocess()
{
    int j = -1,i = 0;
    b[0] = -1;
    lenPattern = (int)p.size();

    while(i<lenPattern)
    {
        while(j>=0 && p[i]!=t[j]) j = b[j];

        i++,j++;
        b[i] = j;
    }
}
void kmpSearch()
{
    lenText = (int)t.size();
    int i = 0,j = 0;

    while(i<lenText)
    {
        while(j>=0 && t[i]!=p[j])j = b[j];
        i++,j++;

        if(j==lenPattern)
        {
            cout<<"pattern is found at index "<<i-j<<endl;
            j = b[j];
        }
    }
}

int main()
{
    getline(cin,t);
    getline(cin,p);

    kmpPreprocess();

    kmpSearch();

    return 0;
}
