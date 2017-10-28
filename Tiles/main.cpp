#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long l,w,a,row = 0,col = 0;

    scanf("%lld%lld%lld",&l,&w,&a);

    if(l%a==0){
        row = l/a;
    }
    else
    {
        row = l/a;
        row++;
    }
    if(w%a==0){
        col = w/a;
    }
    else
    {
        col = w/a;
        col++;
    }
    printf("%lld\n",row*col);

    return 0;
}
