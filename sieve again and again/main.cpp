#include <bits/stdc++.h>

using namespace std;
 //bool marked[10000001] = {false};
bitset<1000000>marked;

 void sieve(){
     marked[0] =marked[1] = true;

             for(int i = 2;i*i<=100000;i++){
                    if(marked[i]!=true){
                for(int j = i*i;j<=100000;j+=i){
                    marked[j] = true;
                }

             } }}
int main()
{   int n;
    cout << "enter a number \n" << endl;
    cin>>n;
    sieve();
    for(int i = 2;i<=n;i++){
        if(marked[i]==false){
            cout<<i<<" ";
        }
    }
    return 0;
}
