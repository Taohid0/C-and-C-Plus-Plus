#include <bits/stdc++.h>

using namespace std;

int main()
{
    struct {
    int value=0;
    bool state = false;
    }devices[21];
    int m,c,n,t,cas = 1;

    while(1)
    {   cout<<devices[10].value;
        cin>>n>>m>>c;
        if(n==0 && m==0 && c==0)break;
        int mx = -1,cur = 0;

        for(int i = 1;i<=n;i++)
        {
            cin>>devices[i].value;
        }
        for(int i = 1;i<=m;i++)
        {
            cin>>t;
            if(!devices[t].state)
            {
                cur+=devices[t].value;
                devices[t].state =true;
                if(cur>mx)mx= cur;

            }
            else
            {
                devices[t].state = false;
                cur-=devices[t].value;
            }

        }
        if(mx>c){
            cout<<"Sequence "<<cas++<<endl<<"Fuse was blown."<<endl<<endl;
        }
        else
            cout<<"Sequence "<<cas++<<endl<<"Fuse was not blown."<<endl<<"Maximal power consumption was "<<mx<<" amperes."<<endl<<endl;
    }
    return 0;
}
