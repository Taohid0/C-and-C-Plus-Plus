#include <bits/stdc++.h>

int main()
{
    int arr[] = {1,0,2,1,21,314,63,54,6354,654,32,1,354,63,51,34,63,43,51,3,463},i;

    int element =sizeof(arr)/sizeof(arr[0]);
    std::sort(arr,arr+element);

    for(i = 0;i<element;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
