#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mx = -10,mn= 99999999;
    int value,n,mxIndex,mnIndex;

    cin>>n;
    mxIndex =0,mnIndex = n-1;
    for(int i = 0;i<n;i++)
    {
        cin>>value;

        if(value<=mn)
        {
            mn =value;
            mnIndex = i;
        }
        if(value>mx)
        {
            mx =value;
            mxIndex  = i;
            //cout<<mxIndex<<endl;
        }
    }
    //cout<<mxIndex<<" "<<mnIndex<<endl;
    int r = mxIndex-1+(n-mnIndex);
    if(mxIndex>mnIndex)r--;
    cout<<r<<endl;
    return 0;
}
