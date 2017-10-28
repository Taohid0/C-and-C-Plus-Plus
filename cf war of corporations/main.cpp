#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,a;
    cin>>s>>a;
    int l1 = (int)s.size();
    int l2 = (int)a.size();
    int counter=0;
    int j=0,i=0;
    while(i<l1)
    {
        int t=i;
        for(j=0;j<l2;j++)
        {
            //cout<<s[t]<<" "<<a[j]<<endl;
            if(s[t]==a[j])t++;
            else break;
        }

        if(j==l2)
        {
            counter++;
            i+=l2;
            i--;
        }

        i++;

    }
    cout<<counter<<endl;
    return 0;
}
