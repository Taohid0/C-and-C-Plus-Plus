#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,q,value;
    cin>>n>>q;
    while(q--)
    {
        cin>>value;
        if(value==16)cout<<"1, 1"<<endl;
        else if (value==15)cout<<"1, 2"<<endl;
        else if (value==14)cout<<"1, 3"<<endl;
        else if (value==13)cout<<"1, 4"<<endl;
        else if (value==5)cout<<"2, 1"<<endl;
        else if (value==4)cout<<"2, 2"<<endl;
        else if (value==3)cout<<"2, 3"<<endl;
        else if (value==12)cout<<"2, 4"<<endl;
        else if (value==6)cout<<"3, 1"<<endl;
        else if (value==1)cout<<"3, 2"<<endl;
        else if (value==2)cout<<"3, 3"<<endl;
        else if (value==11)cout<<"3, 4"<<endl;
        else if (value==7)cout<<"4, 1"<<endl;
        else if (value==8)cout<<"4, 2"<<endl;
        else if (value==9)cout<<"4, 3"<<endl;
        else if (value==10)cout<<"4, 4"<<endl;

    }
    return 0;
}
