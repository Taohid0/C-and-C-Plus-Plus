#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v1,v2,v3,r1,r2,r3,clearVector;
    vector<int>::iterator it1,it2;

    int test,n,num;
    cin>>test;
    for(int i = 1;i<=test;i++)
    {
        cin>>n;
        while(n--)
        {
            cin>>num;
            v1.push_back(num);
        }
        cin>>n;
        while(n--)
        {
            cin>>num;
            v2.push_back(num);
        }
        cin>>n;
        while(n--)
        {
            cin>>num;
            v3.push_back(num);
        }
        n = (int)v1.size();
        for(int j =0;j<n;j++)
        {
            it1 = find(v2.begin(),v2.end(),v1[j]);
            it2 = find(v3.begin(),v3.end(),v1[j]);
            if(it1==v2.end() && it2==v3.end())
            {
                r1.push_back(v1[j]);
            }
        }
         n = (int)v2.size();
        for(int j =0;j<n;j++)
        {
            it1 = find(v1.begin(),v1.end(),v2[j]);
            it2 = find(v3.begin(),v3.end(),v2[j]);
            if(it1==v1.end() && it2==v3.end())
            {
                r2.push_back(v2[j]);
            }
        }
         n = (int)v3.size();
        for(int j =0;j<n;j++)
        {
            it1 = find(v2.begin(),v2.end(),v3[j]);
            it2 = find(v1.begin(),v1.end(),v3[j]);
            if(it1==v2.end() && it2==v1.end())
            {
                r3.push_back(v3[j]);
            }
        }
        sort(r1.begin(),r1.end());
        sort(r2.begin(),r2.end());
        sort(r3.begin(),r3.end());
        cout<<"Case #"<<i<<":"<<endl;
        int sg1,sg2,sg3;
        sg1 = (int)r1.size();
        sg2=  (int)r2.size();
        sg3 =(int)r3.size();

        int mx =max(sg1,sg2);
        mx = max(mx,sg3);
        if(sg1==mx)
        {
            cout<<"1 "<<sg1;
            for(int j = 0;j<sg1;j++)
            {
                cout<<" "<<r1[j];
            }
            cout<<endl;
        }
        if(sg2==mx)
        {
            cout<<"2 "<<sg2;
            for(int j = 0;j<sg2;j++)
            {
                cout<<" "<<r2[j];
            }
            cout<<endl;
        }
        if(sg3==mx)
        {
            cout<<"3 "<<sg3;
            for(int j = 0;j<sg3;j++)
            {
                cout<<" "<<r3[j];
            }
            cout<<endl;
        }
        v1 =clearVector;
        v2 = clearVector;
        v3 =clearVector;
        r1 =clearVector;
        r2 = clearVector;
        r3 = clearVector;

    }
    return 0;
}
