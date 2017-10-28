#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n,m;

    while(scanf("%ld%ld",&n,&m)==2){
     long result = 1;

    for(int j = 2;j<=n;j++){
        result = (result *j)%m;
        }
        if(result==0){
            cout<<m<<" divides "<<n<<"!"<<'\n';
        }
        else
             cout<<m<<" does not divides "<<n<<"!"<<'\n';
        }
    return 0;
}
