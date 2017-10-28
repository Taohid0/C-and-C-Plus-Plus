#include <iostream>

using namespace std;

void mergeShort(int s[],int low,int mid,int high);


void part(int s[],int high,int low)
    {
        int mid;
        if(low<high)
        {
            mid = (low+high)/2;
            part(s,low,mid);
            part(s,mid+1,high);
            mergeShort(s,low,mid,high);
        }
    }
    void mergeShort(int s[],int low,int mid,int high)
    {
        int temp[100];
        int l = low,r = mid+1;

        int i = low;

        while(l<=mid && r<=high)
        {
            if(s[l]<=s[r])
            {
               temp[i] = s[l];
               l++;
            }
            else
            {
                temp[i] = s[r];
                r++;
            }
            i++;
        }
        if(l<mid)
        {
            for(int k = l;k<=mid;k++)
            {
                temp[i]  = s[k];
                i++;
            }
        }
        else
        {
            for(int k = r;k<=high;k++)
            {
                temp[i] = s[k];
                i++;
            }
        }
        for(int k = low;k<=high;k++)
        {
            s[k] = temp[k];
        }
    }

int main()
{
    int n,s[100];

    cout<<"how many numbers do you want to enter ?";
    cin>>n;

    for(int i =0;i<n;i++)
    {
        cin>>s[i];
    }

    part(s,0,n-1);

    for(int i  = 0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}
