#include <bits/stdc++.h>

using namespace std;

int main()
{
   string x,y;
   int flag =false;

    cin>>x>>y;

    int len = (int)x.size();
    for(int i = 0;i<len;i++)
    {
        if(x[i]<y[i])
        {
            flag =true;
            break;
        }
    }

    if(flag)cout<<-1<<endl;
    else
        cout<<y<<endl;
    return 0;
}
