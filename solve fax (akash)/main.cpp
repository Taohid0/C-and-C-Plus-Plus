
#include<bits/stdc++.h>

using namespace std;

int n,i,j,k,l,m,o,p;

int main()
{
    int xn,q;
    char x[1000],y[1000],z[1000];
    while(cin>>x>>k)
    {
        xn=strlen(x);
        m=xn/k;
        if(xn%k!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int yn=0;
        int ck=0;
        for(i=1;i<=k;i++)
        {
            for(j=0,q=m-1;j<m;j++,q--)
            {


                y[j]=x[q+ck];
                z[j]=x[j+ck];
            }
            y[j]='\0';
            z[j]='\0';

            if(strcmp(y,z)==0)
                yn++;
            else
            {
                cout<<"NO"<<endl;

                break;
            }
            ck+=m;

        }
        if(yn==k) cout<<"YES"<<endl;
    }
}
