#include <iostream>

using namespace std;

void sorting(int s[],int len)
{
    for(int i  = 0;i<len;i++)
    {
        int min  = i;

        for(int j = i+1;j<len;j++)
        {
            if(s[min]>s[j])
            {
                min  = j;
            }
        }
        swap(s[min],s[i]);
    }
}
void sorting2(int s[],int len)
{
    for(int i = 1;i<len;i++)
    {
        int j = i;

        while(j>0 && s[j]<s[j-1]){
            swap(s[j],s[j-1]);
            j--;
        }
    }
}

int main()
{
    int n,s[100];

    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>s[i];
    }
    sorting2(s,n);

    for(int i = 0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}
