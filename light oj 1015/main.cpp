#include <bits/stdc++.h>

using namespace std;

int main()
{
    int people,cs,total,value;
    cin>>cs;
    for(int i = 1;i<=cs;i++)
    {
        total= 0;
        cin>>people;
        for(int I  = 0;I<people;I++)
        {
            cin>>value;
            if(value>0)
            {
                total+=value;
            }
        }
        cout<<"Case "<<i<<": "<<total<<endl;

    }
    return 0;
}
