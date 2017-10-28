#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c=1,arr[]={5,4,3,2,1};

    do{
        cout<<c++<<" ";
        for(int i=0;i<5;i++)cout<<arr[i]<<" ";
        cout<<endl;
    }while(next_permutation(arr,arr+5));
    return 0;
}
