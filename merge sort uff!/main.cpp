#include <iostream>

using namespace std;
 void mergeShort(int s[],int low,int mid,int high);
 void partition(int s[],int low, int high)
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
    void mergeShort(int s[],int low,int mid,int high)
    {
        int temp[100];
        int i  = low,l = low;
       int r = mid+1;
        while(l<=mid && r<=high)
        {
            if(s[l]<s[r])
            {
                temp[i++] = s[l];
            }
            else
                temp[i++] = s[r];
        }
        if(l>mid)
        {
            for(int k = r;k<=high;k++)
            {
                temp[i++] = s[k];
            }
        }
        else
        {
            for(int k = l;k<=mid;k++)
            {
                temp[i++] = s[k];
            }
        }
        for(int i = low;i<=high;i++)
        {
            s[i] = temp[i];
        }
    }

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
