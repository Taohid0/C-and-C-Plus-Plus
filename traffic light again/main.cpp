#include <bits/stdc++.h>

using namespace std;

int main()
{
    double l,d,v,g,r;
    double t1,t2,t3,t4;


            cin>>l>>d>>v>>g>>r;
    t2 = 0;
    t1 = d/v;
    while(1){
        t2+=g;

        if(t2>t1){
            t3 = t1;
            break;
        }
        t2+=r;
        if(t2>t1){
            t3 = t2;
            break;
        }
    }
    t4 = t3+((l-d)/v);

    printf("%.8f\n",t4);
    return 0;
}
