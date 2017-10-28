#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(!(n%2))
        cout<<(n/2)-1;
    else
        cout<<(int)(n/2);

    printf("\n");
    return 0;
}
