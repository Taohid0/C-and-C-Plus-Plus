#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n1,n2,value;
    cin>>n1>>n2;
    int temp = n1%10;
    n1 =temp;

    int counter =1,mul= 2;;
    while(1)
    {
        //cout<<n1<<endl;
        if(n1%10==n2 or n1%10==0)
        {
            cout<<counter<<endl;
            return 0;
        }
        n1+=temp;
        n1%=10;
        counter++;
    }
    return 0;
}
