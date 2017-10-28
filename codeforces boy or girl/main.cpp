#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    int arr[1000];
    memset(arr,0,sizeof(arr));
    int counter = 0;
    while(cin>>c)
    {

        if(arr[(int)c]==0)
        {
            arr[(int)c]=1;
            counter++;
        }

    }
    if(counter%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
