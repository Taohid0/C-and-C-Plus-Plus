#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool flag =true;
    int n;
    string s;
    cin>>n;
    int arr[10000];
    for(int i = 1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int c = 1;
    getchar();
    while(n--)
    {
        getline(cin,s);
        int counter = 0;
        int len = (int)s.size();
        for(int i = 0;i<len;i++)
        {
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y')
                counter++;
        }
        //cout<<counter<<endl;
        if(counter!=arr[c++])
            flag = false;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
