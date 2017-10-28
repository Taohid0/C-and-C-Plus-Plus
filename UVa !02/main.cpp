#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b1,b2,b3,c1,c2,c3,g1,g2,g3,min;
    int a[6];
    while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
    {
        a[0] = b2+b3+c1+c3+g1+g2;
        a[1] = b2+b3+g1+g3+c1+c2;

        a[2]  = c2+c3+g1+g3+b1+b2;
        a[3]  = c2+c3+b1+b3+g1+g2;

        a[4] = g3+g2+c1+c3+b1+b2;
        a[5]  = g3+g2+b1+b3+c1+c2;



    for(int i =0;i<6;i++)
    {
        if(i==0)
        {
            min = a[i];
        }
        else if(min>a[i])
        {
            min=a[i];
        }
    }
    for(int i  = 0;i<6;i++)
    {
        if(a[i]==min)
        {
            if(i==0)cout<<"BCG ";
            else if(i==1)cout<<"BGC ";
            else if(i==2)cout<<"CGB ";
            else if (i==3)cout<<"CBG ";
            else if(i==4)cout<<"GCB ";
            else if(i==5)cout<<"GBC ";

            cout<<min<<endl;
            break;
        }

    }
}
    return 0;
}
