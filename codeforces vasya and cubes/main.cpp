#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,needed,rem;
    cin>>n;
    int counter = 0;
    needed=1;
    int toadd=2;
    rem=n;
    while(needed<=rem)
    {
        counter++;
        rem-=needed;
        needed+=toadd++;


    }
    cout<<counter<<endl;
    return 0;
}
