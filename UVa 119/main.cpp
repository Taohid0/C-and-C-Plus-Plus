#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,amount,money,to_give_number;
    map<string,int>m;
    string a[11],name,to_give_name;
cin>>n;
    while(1)
    {
        for(int i= 0;i<n;i++)
        {
            cin>>a[i];
           m[a[i]]=0;
        }

        for(int j = 0;j<n;j++)
        {
            money = 0;
            cin>>name>>amount>>to_give_number;

           if(to_give_number>0) money = amount/to_give_number;




              if(to_give_number!=0){
           // m[name] += amount;
            m[name]-=  ( money*to_give_number);
              }

 //cout<<m["a"]<<"a"<<endl<<amount-(money*to_give_number)<< " "<<money*to_give_number;
            while(to_give_number--)
            {
                cin>>to_give_name;
                m[to_give_name]+=money;
            }


        }
        for(int k = 0;k<n;k++)
        {
            cout<<a[k]<< " "<<m[a[k]]<<endl;
        }
        if(cin>>n)cout<<endl;
        else break;

        m.clear();

    }
    return 0;
}
