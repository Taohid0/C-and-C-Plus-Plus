#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int counter=0;
        for(int i=1;counter<n;i+=2)
        {
            cout<<i<< " ";
            counter++;
        }
        cout<<endl;
    }

    return 0;
}
