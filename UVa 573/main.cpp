#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h,u,d,f;

    while(true)
    {
        cin>>h>>u>>d>>f;
        if(h==0 && u==0 && d==0 && f==0)break;

       double currU = u;
        double fatiguye = u*((double)f/100);
        double ini = 0.0;
        for(int i = 1;;i++)
        {
           ini+=currU;
            if(ini>h){
                cout<<"success on day "<<i<<endl;
                break;
            }
            ini-=d;

            if(ini<0){
                cout<<"failure on day "<<i<<endl;
                break;
            }

            currU-=fatiguye;
            if(currU<0)currU = 0;

        }
    }
    return 0;
}
