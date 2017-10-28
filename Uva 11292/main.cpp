#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,dragon[20002],knight[20002];

    while(cin>>n>>m)
    {
        if(!n && !m )break;

        for(int I=0;I<n;I++)
        {
            cin>>dragon[I];
        }
        for(int I=0;I<m;I++)
        {
            cin>>knight[I];
        }
        sort(dragon,dragon+n);
        sort(knight,knight+m);
        long long result=0;

       int  cut=0;
        for(int I=0;I<m ;I++)
        {
            if(knight[I]>=dragon[cut])
            {
                result+=knight[I];
                cut++;

            }
            if(cut==n)break;

        }
        if(cut==n)cout<<result<<endl;

        else
            cout<<"Loowater is doomed!"<<endl;
    }
    return 0;
}
