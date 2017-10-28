#include <bits/stdc++.h>

using namespace std;

void sieve (int n[],int v){
          //  int num = v;


           for(int i = 2;i<v;i++){
            for(int j = i+i;j<v;j+=i){
                 n[j] = 1;
            }
           }}

int main()
{
    cout << "enter a number" << endl;
    int n;
    cin>>n;

      int marked[100000] = {0};
    sieve(marked,n);

    for(int i = 2;i<n;i++){
        if(marked[i] == 0){
            cout<<i<<"  ";
        }
    }
    return 0;
}
