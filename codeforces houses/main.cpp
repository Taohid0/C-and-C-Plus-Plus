#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,k,value;
    vector<int>v;
    v.push_back(0);
    cin>>m>>n>>k;
    for(int i = 0;i<m;i++)
    {
        cin>>value;
        v.push_back(value);
    }
    int counter1=0,counter2=0;
    bool flag = false;
    for(int i = n;i<=m;i++)
    {
        if(v[i]!=0 and v[i]<=k)
        {
            flag =true;
            //counter1++;
            break;
        }
        counter1++;
    }
    int mn=99999;
    if(flag)mn=counter1;
    flag =false;
    for(int i=n;i>=1;i--)
    {
        if(v[i]!=0 and v[i]<=k)
        {
            flag = true;
            //counter2++;
            break;
        }
        counter2++;
    }
    //cout<<counter1<<" "<<counter2<<endl;
    if(flag)mn= min(mn,counter2);
    cout<<mn*10<<endl;
    return 0;
}
