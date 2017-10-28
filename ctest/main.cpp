#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,a,b;
    cin>>a>>b;
    n=0;
    for(i=1;i<=a;i++)
    {
        if(b%i==0)
        {
            if(i<=a && (b/i)<=a)
                n++;
        }
    }
    cout<<n<<endl;


    return 0;
}
