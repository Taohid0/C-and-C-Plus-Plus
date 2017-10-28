#include <bits/stdc++.h>

using namespace std;

int main()
{
    char *arr;
    arr = new char[5];

    for(int i = 65;i<77;i++){
        arr[i] = i;
    }

    for(int i =  65;i<77;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
