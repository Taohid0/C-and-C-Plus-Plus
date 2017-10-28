#include <bits/stdc++.h>

using namespace std;

#define Max 100000
int b[Max];
string pattern,text;

void kmpPreprocess()
{
    int i = 0,j=-1;
    b[0] = -1;
    int m = pattern.size();

    while(i<m)
    {
        while(j>=0 && pattern[i]!=pattern[j])
        {
            j = b[j];
        }
        i++;j++;
        b[i] = j;
    }
}

void kmpSearch()
{
    int i = 0,j= 0;

    int n = text.size();
     int m = pattern.size();
    while(i<n)
    {
        while(j>=0 && text[i]!=pattern[j])j = b[j];
        i++;j++;
        if(j==m)
        {
            cout<<"pattern matched"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"pattern not matched "<<endl;

    }
}

int main()
{
    getline(cin,text);
    getline(cin,pattern);

    kmpPreprocess();
    kmpSearch();
    return 0;
}
