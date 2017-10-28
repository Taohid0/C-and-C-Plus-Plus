#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int road,number,difference,r,c = 1;;

    while(1)
    {
        cin>>road>>number;
        if(!road && !number)
            break;
        difference = road-number;

        if(difference<=0)cout<<"Case "<<c++<<": "<<0<<endl;

        else
            {
            r =ceil((float)difference/number);
              if(r>26)
              {
                  cout<<"Case "<<c++<<": impossible"<<endl;
              }
              else
                cout<<"Case "<<c++<< ": "<<r<<endl;
            }
    }
    return 0;
}
