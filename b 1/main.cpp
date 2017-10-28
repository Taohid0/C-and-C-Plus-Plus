#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    vector<int>v;
    string s;
    cin>>n>>k;
    getchar();
    for(int i=0;i<n;i++)
    {
        getline(cin,s);

        v.push_back((int)s.size());

    }
    string resultString;
    getline(cin,resultString);

    int len =(int)resultString.size();
    int r=0,total=0;

    sort(v.begin(),v.end());
    int sg = (int)v.size();

    for(int i=0;i<sg;i++)
    {

        if(v[i]==len)
        {
            r++;
            break;
        }
        r++;

    }
    int counter=0;

    for(int i=0;i<sg;i++)
    {

        if(v[i]>len)
        {
            break;
        }
        counter++;


    }
    total = (counter/k)*5+counter;
    cout<<r<<" "<<total<<endl;
    return 0;
}
