#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(1){
            long long arr[36]={1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8092, 16184,
             32368, 64736, 129472, 258944, 517888, 1035776,
             2071552, 4143104, 8286208, 16572416, 33144832, 66289664, 132579328, 265158656, 530317312,
            1060634624, 2121269248, 4242538496, 8485076992, 16970153984, 33940307968 };



   unsigned long long result=1;int n;
    cin>>n;

    for(int i = 0;i<n;i++)
        result*=2;

    cout<<result<< " "<<arr[n]<<endl;;
    }
    return 0;
}