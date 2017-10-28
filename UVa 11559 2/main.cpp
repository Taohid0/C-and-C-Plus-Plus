#include <bits/stdc++.h>

using namespace std;

int main()
{
    int participate,budget,hotels,weeks,perPersonBill;
    bool test;
    set<int>s;

    while(scanf("%d %d %d %d", &participate,&budget,&hotels,&weeks) != EOF)
    {


        for(int i =1;i<=hotels;i++)
        {
            test  =false;
            cin>>perPersonBill;

            for(int j = 1;j<=weeks;j++)
            {
                int tmp;
                cin>>tmp;
                if(tmp<participate)
                {
                    test = true;
                }
            }

        if(!test)
        {
            s.insert(perPersonBill*participate);
        }
        }


    if(s.empty())
    {
        cout<<"stay home"<<endl;
    }
    else if(*s.begin()>budget)
    {
        cout<<"stay home"<<endl;
    }
    else
    {        cout<<*s.begin()<<endl;
    }
      s.clear();
    }
    return 0;
}
