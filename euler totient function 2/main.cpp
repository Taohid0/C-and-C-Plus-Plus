#include <bits/stdc++.h>

using namespace std;

int main()
{    int n;

    cout << "enter a number " << endl;
    cin>>n;
    int result = n;

    for(int i =2;i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            result-=result/i;
        }
    }
    if(n>1){
        result-=result/n;
    }
    cout<<result;

    return 0;
}
