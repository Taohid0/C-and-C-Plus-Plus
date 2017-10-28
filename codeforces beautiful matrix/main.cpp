#include <bits/stdc++.h>

using namespace std;

int main()
{
    int value,i,j;
    for(int I =1;I<=5;I++)
    {
        for(int J = 1;J<=5;J++)
        {
            cin>>value;
            if(value==1)
            {
                i =I;
                j = J;
            }
        }
    }
    cout<<abs(3-i)+abs(3-j)<<endl;
    return 0;
}
