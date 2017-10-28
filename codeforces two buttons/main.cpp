#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(m>=n)cout<<m-n<<endl;
    else
        cout<<min(n/m+(m-n/m),n/(1+m)-(m-n/(1+m)))<<endl;
    return 0;
}
