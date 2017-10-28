#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s,prev,temp;
    int counter=0;
    int arr[10000];
    vector<string>v;
    bool flag=false;
    cin>>n;
    int nn=n;
    while(nn--)
    {
        cin>>s;
        temp = s;
        v.push_back(s);
        sort(temp.begin(),temp.end());
        if(counter and prev!=temp)
        {
            flag =true;
        }
        prev=temp;
        counter++;
    }
    if (flag)
    {
        cout<<-1<<endl;
        return 0;
    }
    counter=0;
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<(int)v[i].size();j++)
        {

            for(int k=0;k<n;k++)
            {
                int t=0;
                for(int l=0;l<(int)v[i].size();k++)
                {
                    if(v[k][l]!=v[i][l])
                        t++;
                }
                arr[counter++]=t;
                cout<<arr[counter]<<" ";
            }
        }
    }
    int mn=9999999;
    for(int i=0;i<n;i++)
    {
        counter=0;
        int tmp=0;
        tmp+=arr[i];
        if(counter==4)
        {
            mn =min(mn,tmp);
            counter=0;
        }
    }
    cout<<counter<<endl;
    return 0;
}
