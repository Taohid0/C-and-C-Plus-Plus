#include <bits/stdc++.h>

using namespace std;

struct data{
            string name;
            int low_price;
            int high_price;
            }info[10001];

int main()
{
    int test,query,price,total_cars;
    int flag;
    cin>>test;

    while(test--)
    {

        cin>>total_cars;

        for(int i=0;i<total_cars;i++)
        {
            cin>>info[i].name>>info[i].low_price>>info[i].high_price;
        }
        cin>>query;
        while(query--)
        {   flag = 0;
            string result;
            cin>>price;

            for(int i = 0;i<total_cars;i++)
            {
                if(info[i].low_price<=price && info[i].high_price>=price)
                {
                    flag++;
                    result = info[i].name;
                }
            }
            if(flag==1)
        {
            cout<<result;
        }
        else
            cout<<"UNDETERMINED";
        }
      if( test)
        cout<<endl;


    }
    return 0;
}
