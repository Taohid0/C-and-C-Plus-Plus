#include <bits/stdc++.h>

using namespace std;

int main()
{
    int evencoutner=0,oddcounter=0,c,value,indxeven,indexodd;
    int arr[10000];
    cin>>c;
    for(int i = 0;i<c;i++)
    {
        cin>>arr[i];
        if(arr[i]%2)
        {
            oddcounter++;
            indexodd = i+1;
        }
    }
    for(int i = 0;i<c;i++)
    {
        if(arr[i]%2==0)
        {
            evencoutner++;
            indxeven=i+1;
        }
    }

    if(evencoutner==1)
    {
        cout<<indxeven<<endl;
    }
    else
        cout<<indexodd<<endl;
    return 0;
}
