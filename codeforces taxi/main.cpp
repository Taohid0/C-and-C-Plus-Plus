#include <bits/stdc++.h>

using namespace std;
//not accepted,wrong ans
int main()
{
    int counter = 0,arr[100005],n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int low = 0,high =n-1;
    while(low<=high)
    {
        if(arr[low]+arr[high]<=4)
        {
            high--,low++;

            int temp = arr[low]+arr[high];
            bool flag =true;
            while(flag)
            {
                if(temp+=arr[high-1]<=4)high--;
                else if(temp+=arr[low+1]<=4)low++;
                else flag = false;
            }
        }
        else
        {
            high--;
        }
        counter++;
    }

    cout<<counter<<endl;
    return 0;
}
