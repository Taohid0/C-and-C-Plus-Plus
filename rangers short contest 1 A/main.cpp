#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,a;
    cin>>n>>a;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            if(i==j)
                cout<<a<<" ";
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
