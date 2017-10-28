#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,result;

    cout << "enter a number " << endl;

     cin>>n;
   result = n;
     for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            result -=result/i;
        }
     }
     if(n>1){
        result -=result/n;
     }
     cout<<result;
    return 0;
}
