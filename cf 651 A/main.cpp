#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f,n,result=0;

    cin>>f>>n;
    while(f>0 and n>0)
    {
        if(f<n)
        {
            f+=1;
            n-=2;
        }
        else if(f>n)
        {
            n+=1;
            f-=2;
        }
        else if(f==n and f<2)
        {
            break;
        }
        else
        {
            f+=1;
            n-=2;
        }
        result++;
    }
    cout<<result<<endl;

    return 0;
}
