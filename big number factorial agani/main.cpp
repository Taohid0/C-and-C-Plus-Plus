#include <bits/stdc++.h>

using namespace std;

int main()
{   int num;
    cout << "enter a number : " << endl;
    cin>>num;
    vector<int>fact(10000000);
    int temp = 0,m= 1;
    fact[0]=1;


    for(int i = 1;i<=num;i++){
        for(int j = 0;j<m;j++){
            int number = (fact[j]*i+temp);
            fact[j] = number%10;
            temp = number/10;
        }
        while(temp>0){
            fact[m] = temp%10;
            temp/=10;
            m++;
        }
    }
    for(int i = m-1;i>=0;i--){
        cout<<fact[i];
    }
    return 0;
}
