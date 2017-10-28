#include <bits/stdc++.h>

using namespace std;

bitset<1001>arr;
void sieve()
{
    for(int i = 2;i<=101;i++)
    {
        for(int j = i*i;j<=1001;j+=i)
        {
            if(arr[j]==0)arr[j] = 1;
        }
    }
    arr[1] = 0;
}


int main()
{   sieve();
    int n,c;
    vector<int>v;
    while(cin>>n>>c)
    {
        for(int i = 1;i<=n;i++)
        {
            if(!arr[i])v.push_back(i);
        }
        int len = (int)v.size();
            //cout<<len<<endl;
        cout<<n<<" "<<c<<":";
        if(len<=c*2-1)
        {
            for(int i = 0;i<len;i++)
            {
                cout<<" "<<v[i];
            }
        }
        else if(len%2==0)
        {
            for(int i = len/2-c;i<=len/2+c-1;i++)
            {
                cout<<" "<<v[i];
            }
        }
        else {
            for(int i = ceil(len/2)-c+1;i<=ceil(len/2)+c-1;i++)
            {
                cout<< " "<<v[i];
            }
        }
        cout<<endl<<endl;
        v.clear();
    }
    return 0;
}
