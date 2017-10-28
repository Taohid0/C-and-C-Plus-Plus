#include <bits/stdc++.h>

using namespace std;
int prime[] = {2,3,5,7,11,17};

int main()
{
    int n,divisor = 1,cnt;
    cin>>n;

    for(int i = 0;i*i<7;i++){
        cnt = 1;
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                cnt++;
                n/=prime[i];
            }
        }
        divisor*=cnt;
    }
    cout<<divisor;
    return 0;
}
