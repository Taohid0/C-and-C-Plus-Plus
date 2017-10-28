#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1,2,3};

    vector<int> myvector(arr,arr+3);

    for(int i = 0;i<50;i++){
        cout<<myvector[i]<<" ";
    }
    return 0;
}
