#include <bits/stdc++.h>

using namespace std;

int main()
{
    int participate,rooms,budget,hotels,weeks,perPersonBill;
    bool test;
    set<int>s;

    while(scanf("%d %d %d %d\n", &participate,&budget,&hotels,&weeks) != EOF)
    {   test  =false;
        cin>>perPersonBill;
        for(int i =1;i<weeks;i++)
        {
            cin>>rooms;
            if(rooms<participate)
            {
                test = true;
            }
        }
        if(!test)
        {
            s.insert(perPersonBill*participate);
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
