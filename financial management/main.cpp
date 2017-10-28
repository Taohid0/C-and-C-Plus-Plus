#include <bits/stdc++.h>

using namespace std;

int main()
{
    float arr[12];
    float sum = 0;
    for(int i = 0;i<12;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    float result = sum/12;

    printf("$%.2f\n",result);
    return 0;
}
