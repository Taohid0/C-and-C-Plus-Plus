#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,d,n,i,j;
    cin>>a>>b>>n;
    int check=2;
    vector<long long int>v;
    d=1;
    for(i=0;i<100;i++)
    {
        if(d>=a && d<=b){
            v.push_back(d);
            check=3;
        }
        if(d>=b)
            break;
        d*=n;
        //cout<<d<<endl;
    }
    if(check==2)
        cout<<-1<<endl;
    else{
        j=v.size();
    for(i=0;i<j-1;i++)
        cout<<v[i]<<" ";
    cout<<v[i]<<endl;}
    return 0;
}
