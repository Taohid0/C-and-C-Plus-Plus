#include <bits/stdc++.h>

using namespace std;

int main()
{
    int counter=0,arr[200];
    memset(arr,0,sizeof arr);
    string s;
    cin>>s;
    int len = (int)s.size();
    for(int i =0;i<len;i++)
    {
        arr[(int)s[i]]++;
    }
    for(int i = 1;i<200;i++)
    {
        if(arr[i]%2==1)counter++;
    }

    if(counter%2 or counter==0)cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
    return 0;
}
