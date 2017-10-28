#include <bits/stdc++.h>

using namespace std;

long long p(int base,int power)
{
    long long result=1;
    for(int i=1;i<=power;i++)
    {
        result*=base;
    }
    return result;
}

int main()
{
    int t;

    int inpt;
          cin>>t;
    while(t--)
    {
        vector<int>v;
        for(;;)
        {
            cin>>inpt;
            if(inpt==0)break;
            v.push_back(inpt);
        }
        sort(v.begin(),v.end());

        long long sum=0;
        bool flag = false;
        int sg=(int)v.size();
        int count=1;
        for(int i=sg;i>=1;i--)
        {
             sum+=p(v[i-1],count++)*2;
             //cout<<sum<<endl;
             if(sum>5000000)
             {
                 flag=true;
                 break;
             }
        }
        if(!flag)
            cout<<sum<<endl;
        else
            cout<<"Too expensive"<<endl;
    }
    return 0;
}
