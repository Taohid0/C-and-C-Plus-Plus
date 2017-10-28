#include <bits/stdc++.h>

using namespace std;

int main()
{   long a,b;
    long count = 0;

    while(scanf("%ld%ld",&a,&b)){
            long sum = 0;
        if(a==0 && b==0){
            break;
        }
        for (int i = a;i<=b;i++){
                int temp = i;
            while(temp){
                if(temp%2==0){
                    temp/=2;
                  }
                 else
                 {
                     sum++;
                    temp/=2;
            }
        }}
        printf("Case %ld: %ld\n",++count,sum);
    }
    return 0;
}
