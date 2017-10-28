#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {1,2,3,5,4,9,10};

    sort(arr,arr+7);

    for(int i = 0;i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
