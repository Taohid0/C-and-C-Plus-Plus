#include <bits/stdc++.h>

using namespace std;

void permutation(string s,int startIndex,int endIndex)
{
    if(startIndex==endIndex)
    {
        cout<<s<<endl;
    }
    else
    {
        for(int i = startIndex;i<=endIndex;i++)
        {
            swap(s[i],s[startIndex]);
            permutation(s,startIndex+1,endIndex);
            swap(s[i],s[startIndex]);
        }
    }
}

int main()
{
    string s;
    cin>>s;
    int len = (int)s.size();

    permutation(s,0,len-1);
    return 0;
}
