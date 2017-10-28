#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int k,w,money,result,sum = 0;

    cin>>k>>money>>w;

    for(int i = 1;i<=w;i++){
        sum+=i*k;
    }
    result = sum-money;
    if(result>0){
        cout<<result<<endl;
    }
    else
        cout<<"0\n";
    return 0;
}
