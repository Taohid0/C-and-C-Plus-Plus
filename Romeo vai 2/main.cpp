#include <bits/stdc++.h>

using namespace std;

int square (long n){
            int result = 0;

            for(int i = 1;i*i<=n;i++){
                 result++;
            }
            return result;
            }

int main()
{
    long n;
    while(scanf("%ld",&n)!=EOF){
        int result = square(n);
        if(result%2){
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<< endl;
    }
    return 0;
}
