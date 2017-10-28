#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    bool flag =true;

    for(int i =1;i<=r;i++)
    {
        if(i%2)
        for(int j =1;j<=c;j++)
        {
            cout<<"#";

        }
        else if(flag)
        {
            for(int j = 1;j<c;j++)
                cout<<".";
            cout<<"#";
            flag= !flag;
        }
        else
        {
            cout<<"#";
            for(int j = 1;j<c;j++)
            {
                cout<<".";
            }
            flag=!flag;
        }
        cout<<endl;
    }
    return 0;
}
