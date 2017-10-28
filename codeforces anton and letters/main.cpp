#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[1000],counter=0;
    memset(arr,0,sizeof(arr));
    string s;
    getline(cin,s);
    int len = (int)s.size();
    for(int i = 0;i<len;i++)
    {
        if(isalpha(s[i]))
        {
            if(arr[(int)s[i]]==0)

            {
                counter++;
                arr[(int)s[i]]=1;
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}
