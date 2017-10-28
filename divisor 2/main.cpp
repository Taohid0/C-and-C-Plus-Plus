#include <iostream>

using namespace std;

int main()
{
    int n,result =0;
    cin>>n;

    for(int i = 1;i*i<=n;i++){
        if(i*i==n){
            result++;
        }
        else if(n%i==0){
            result+=2;
        }
    }
    cout<<result;
    return 0;
}
