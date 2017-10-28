#include <bits/stdc++.h>

using namespace std;
double temp[1000001] = {0};

int main()
{
    int test,number,base;
    double result = 0;

    for(int j = 1;j<=1000001;j++){
        result    +=  log10(j);
        temp[j] = result;
            }

    cin>>test;

    for(int i = 1;i<=test;i++){

         result = 0;

        cin>>number>>base;



    cout<<"Case "<<i<<": " <<((int)(temp[number]/log10(base))+1)<<endl;
    }

    return 0;
}
