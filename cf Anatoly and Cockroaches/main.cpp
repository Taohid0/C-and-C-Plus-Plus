#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    int counter=0;
    for(int i = 0;i<n-1;i++)
    {
        int temp=1;
        while(s[i]==s[i+1])
        {
            temp++;
            i++;
        }
        counter+=temp/2;
    }
    cout<<counter;
    return 0;
}
