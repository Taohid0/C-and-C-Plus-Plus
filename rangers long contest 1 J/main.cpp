#include <bits/stdc++.h>

using namespace std;

struct zeroOne{
int zero = 0;
int one = 1;};

int main()
{
    int value,n,arr[1000],zeroCounter = 0,oneCounter = 0;
    zeroOne zr[1000];
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>value;
        arr[i] =value;
        if(value==1)
            oneCounter++;
        else
            zeroCounter++;
        zr[i].one = oneCounter;
        zr[i].zero = zeroCounter;
        //cout<<zr[i].zero<< " "<<zr[i].one<<endl;
    }
    int mxi,mxj,mx=-1;
    for(int i = 0;i<n;i++)
    {
        for(int j =i;j<n;j++)
        {

            if((zr[j].zero-zr[i].zero-zr[j].one-zr[i].one)>mx)
            {

                mx = zr[j].zero-zr[i].zero;
                mxi = i;
                mxj = j;
            }
        }
    }
    cout<<mxi<<" "<<mxj<<endl;
    int r = zr[mxj].zero-zr[mxi].zero;
    //cout<<r<<endl;
    for(int i = 0;i<n;i++)
    {
        if(i>mxi and i<mxj)continue;
        else if (arr[i])r++;
    }
    cout<<r<<endl;
    return 0;
}
