#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,l,g,r,d;

    double time1,time2,time3,time4;
    while(cin>>l>>d>>v>>g>>r)
    {
        time1=(double)d/v;
        time2=0;
        while(1)
        {
            time2+=g;
            if(time2>time1)
            {
                time3=time1;
                break;
            }
            time2+=r;
            if(time2>time1)
            {
                time3=time2;
                break;
            }
        }

        time4=time3+((double)(l-d)/(double)v);

        printf("%.8f\n",time4);

    }
    return 0;
}
