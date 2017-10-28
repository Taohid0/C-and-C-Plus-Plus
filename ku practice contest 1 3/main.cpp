#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;
    getchar();
    cin>>s;

    int sum1=0,sum2=0;
    bool flag =true;
    int chck = n/2;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='4' && s[i]!='7')
        {
            flag = false;
            break;
        }
        if(i<chck)
        {
            sum1+=(int)s[i];
        }
        else
            sum2+=(int)s[i];
    }
    if(!flag)
        cout<<"NO"<<endl;
    else if(sum1==sum2)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;


    return 0;
}
