#include <bits/stdc++.h>

using namespace std;

int main()
{
    int coutner = 0,n,m;
    cin>>n>>m;

    for(int i = 1;i<=n;i++)
    {
        if(i%m==0)n++;
    }
    cout<<n<<endl;
    return 0;
}
