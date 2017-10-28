#include <iostream>

using namespace std;

void mergeShort(int s[],int low,int mid,int high)
{
    int temp[100];
    int i = low,l  = low;
    int r = mid+1;

    while(l<=mid && r<=high)
    {
        if(s[l]<s[r])
        {
            temp[i++] = s[l++];

        }
        else
        {
            temp[i++] =s[r++];

        }

    }
 if(r<=high)
 {
     for(int I = r;I<=high;I++)
     {
         temp[i++] = s[I];

     }
 }
 else
 {
     for(int I = l;I<=mid;I++)
     {
         temp[i++] = s[I];

     }
 }
 for(int i = low;i<=high;i++)
 {
     s[i] = temp[i];
 }
}

void partition(int s[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;

        partition(s,low,mid);
        partition(s,mid+1,high);

        mergeShort(s,low,mid,high);
    }
}
int main()
{
    int n,s[100];

    cout<<"how many numbers do you want to enter ?";
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>s[i];
    }
    partition(s,0,n-1);

    for(int i  =0;i<n;i++)
    {
        cout<<s[i]<< " ";
    }
    return 0;
}
