#include <bits/stdc++.h>

using namespace std;

vector<int>primes;
int marked[10000000] = {false};

void prime_generator()
{
    marked[0]= marked[1] = true;

    for(int i = 2;i*i<=1000000;i++)
    {
        if(!marked[i])
        {
            for(int j = i*i;j<=1000000;j+=i){
                marked[j] = true;
            }
        }
    }
    for(int i = 0;i<1000000;i++){
        if(!marked[i]){
            primes.push_back(i);
        }
    }
}
int main()
{
    prime_generator();
    int test,n;

    cin>>test;
    while(test--)
    {
        cin>>n;
        cout<<primes[n-1];
        if(test>=1)cout<<endl;
    }
    return 0;
}
