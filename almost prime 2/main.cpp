#include <bits/stdc++.h>

using namespace std;

int main()
{
    int prime[3001] = {0};
    int almst[3001]= {0};
    int result(0),i,j,n;
    cin>>n;

    for( i = 2;i<=n;i++){
            if(!prime[i]){
        for(j = i+i;j<=n;j+=i){
            prime[j] = 1;
            almst[j]+=1;
        }}
        if(almst[i]==2){
            result+=1;
        }
    }
    printf("%d\n",result);

    return 0;
}
