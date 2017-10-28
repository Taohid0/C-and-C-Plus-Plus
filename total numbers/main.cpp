#include <bits/stdc++.h>

using namespace std;

long number_digit (long n){
           int result = 0;

           while(n>0){
            n/=10;
            result++;
           }
           return result;

 }

int main()
{
    long num,result = 0;
    cin>>num;
    for(int i = 1;i<=num;i++){
        result+=number_digit(i);
    }
    cout<<result<<endl;
    return 0;
}
