#include <bits/stdc++.h>

using namespace std;

int main()
{
    int year,popes,arr[100006];
    while(scanf("%d",&year)==1)
    {
        scanf("%d",&popes);
        for(int I=0;I<popes;I++)
        {
            scanf("%d",&arr[I]);
        }
        int r=0,first,last;

        for(int i=0;i<popes;i++)
        {
            int j=i;
            int counter=0;
            while(arr[j]-arr[i]<year && j<popes)
                {
                  //  cout<<arr[i]<<" "<<arr[j]<<" "<<counter<<endl;
                    counter++;
                    j++;
                }
            if(counter>r)
            {
                r=counter;
                first=arr[i];
                last=arr[j-1];
            }
        }
        cout<<r<< " "<<first<<" "<<last<<endl;
    }
    return 0;
}
