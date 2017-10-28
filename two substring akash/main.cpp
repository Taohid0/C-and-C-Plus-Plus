#include<bits/stdc++.h>
using namespace std;
int main()
{

    char x[100010];
    char y[]="AB";
    char z[]="BA";
    scanf("%s",x);

    int xn=0,yn=0,a=0,b=0;

    for(int i=0;x[i];i++)
    {
        bool flag=true;
        for(int j=0;y[j];j++)
        {
            if(y[j]!=x[i+j])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            xn++;
            a=i;
            if(xn==2)
                break;
        }

    }


    for(int i=0;x[i];i++)
    {
        bool flag=true;
        for(int j=0;z[j];j++)
        {
            if(z[j]!=x[i+j])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            yn++;
            b=i;
            if(yn==2)
                break;
        }
    }



    if(xn==2 && yn==2)
    {
        cout<<"YES"<<endl;
    }
    else if(a!=b+1 && b!=(a+1) && a!=b)
    {
        cout<<"YES"<<endl;

    }
    else cout<<"NO"<<endl;




    return 0;
}
