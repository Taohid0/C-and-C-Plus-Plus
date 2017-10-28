#include <bits/stdc++.h>

using namespace std;

int main()
{  int i,flash_number,total_mb,flash_drives[100005],sum = 0,result = 0;

    cin>>flash_number>>total_mb;

    for(i = 0;i<flash_number;i++)
    {
        cin>>flash_drives[i];
    }

    sort(flash_drives,flash_drives+flash_number);

    for(i = flash_number-1;i>=0 && total_mb>sum;i--)
    {
        sum +=flash_drives[i];
        result++;
    }

    cout<<result<<endl;

        return 0;
}
