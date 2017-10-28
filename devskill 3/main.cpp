#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long prev=1,present=2;
    long long arr[1000]={0};
    arr[1]=1;
    arr[2]=2;
    int i=3;

    while(true){
        arr[i]=prev+present;
        prev=present;
        present=arr[i];
        //cout<<arr[i]<<endl;
        if(prev>=2147483648)break;
        i++;
    }
    int n;
    while(cin>>n)
    {
        int r;
        for(int i=1;i<1000;i++)
            if(arr[i]==n)
        {
            r=i;
            break;
        }
        if(r==1)
        {
            printf("Showmic brings 1 chocolate on 1st day.\n");
        }
        else if(r==2)
        {
            printf("Showmic brings 2 chocolates on 2nd day.\n");
        }
        else if(r==3)
        {
            printf("Showmic brings 3 chocolates on 3rd day.\n");
        }
        else
            printf("Showmic brings %d chocolates on %dth day.\n",n,r);
    }
    return 0;
}
