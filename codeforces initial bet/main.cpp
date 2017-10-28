#include <bits/stdc++.h>

using namespace std;

int main()
{
    int total = 0,value;
    for(int i = 1;i<=5;i++)
    {
        cin>>value;
        total+=value;
    }
    if(total==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(total%5==0)
        cout<<total/5<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
