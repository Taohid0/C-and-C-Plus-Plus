#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d,r;
    int inpt;
    while(1)
    {
        cin>>n>>d>>r;
        if(!n&&!d&&!r)break;
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<n;i++)
        {
            cin>>inpt;
            v1.push_back(inpt);
        }
        for(int i=0;i<n;i++)
        {
            cin>>inpt;
            v2.push_back(inpt);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        int res=0;
        for(int i=0;i<n;i++)
        {
            int temp=v1[i]+v2[n-1-i];
            if(temp>d)
            {
                res+=(temp-d)*r;
            }

        }
        cout<<res<<endl;
    }
    return 0;
}
