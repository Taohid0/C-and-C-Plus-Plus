#include <iostream>

using namespace std;

int quicksort(int s[],int low,int high);

void part(int s[],int low,int high)
{
    int p;

    while(low<high)
    {
        p  = quicksort(s,low,high);

        part(s,low,p-1);
        part(s,p+1,high);
    }
}
int quicksort(int s[],int low,int high)
{
    int h = high;
    int firsthigh = low;

    for(int i = low;i<high;i++)
    {
        if(s[i]<s[high])
        {
            swap(s[i],s[firsthigh++]);
        }

    }
    return firsthigh;
}

int main()
{int n,s[100];

    cout<<"how many numbers do you want to enter ?";
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>s[i];
    }
    part(s,0,n-1);

    for(int i  =0;i<n;i++)
    {
        cout<<s[i]<< " ";
    }
    return 0;
}
