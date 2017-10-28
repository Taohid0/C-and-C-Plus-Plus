#include <bits/stdc++.h>

using namespace std;

int main()
{   int arr[100],j,element;

    cout << "enter the number of element : " << endl;
    cin>>element;

    cout<<"enter the numbers : ";

    for(int i = 0;i<element;i++)
    {
        cin>>arr[i];
    }

    for(int i = 1;i<=element;i++)
    {
        int temp = arr[i];

        j = i-1;

        while(arr[j]>temp && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(int i = 0;i<element;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
