#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << "enter a number" << endl;
    int n;
    cin>>n;
    int result = 0;
    for(int i = 1;i*i<=n;i++){
        if(i*i==n){
            result+=1;
        }
        else if(n%i==0){
            result+=2;
        }
    }
    cout<<result;
    return 0;
}
