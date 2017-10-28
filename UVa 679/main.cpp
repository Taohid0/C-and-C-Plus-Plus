#include<bits/stdc++.h>

using namespace std;

int maxi;

int bSearch(int node,int value)
{
    int left = node*2;
    int right = left+1;
    int r;
    if(right<=maxi )
    {
        if(value%2==0)
        {
            r = bSearch(right,value/2);
        }
        else r = bSearch(left,value/2+1);
    }

   else r = node;
   return r;
}
int main()
{
    ios::sync_with_stdio(false);
    int test,d,i;
    cin>>test;
    while(test--)
    {
        cin>>d>>i;
        maxi = pow(2.0,d)-1;

        int r = bSearch(1,i);
        cout<<r<<endl;
    }


    return 0;
}
