#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,sum,mx,value;
    while(cin>>n)
    {
        if(n==0)break;
        sum=-100001;
        mx=0;
        for(int i = 0;i<n;i++)
        {
            cin>>value;
            mx+=value;
            sum = max(sum,mx);
            if(mx<0)mx=0;
        }
        if(sum>0)cout<<"The maximum winning streak is "<<sum<<"."<<endl;
        else
            cout<<"Losing streak."<<endl;
    }
    return 0;
}
