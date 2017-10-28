#include <bits/stdc++.h>

using namespace std;

int main() {
   int a[5],b[5],al=0,bb=0;
    for(int i = 0;i<3;i++)
        {cin>>a[i]>>b[i];
        }
    for(int i = 0;i<3;i++)
        {
        if(a[i]>b[i])al++;
        else if(a[i]<b[i])bb++;
    }
    cout<<al<<" "<<bb;
    return 0;
}
