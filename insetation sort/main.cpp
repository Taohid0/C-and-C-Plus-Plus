#include <bits/stdc++.h>


int main()
{
    int data[] =  {1,21,21,435,43,43,54,354,3,4};

    for(int i = 0;i<=10;i++)
    {
        int j = i;

        while(j>0 && data[i]<data[j-1])
        {

            j--;
        }
        int temp = data[i];

        for(int k = i;k>j;k--)
        {
            data[k] = data[k-1];
        }
        data[j] = temp;
    }
    for(int i = 0;i<10;i++){
        printf("%d ",data[i]);
    }

    return 0;
}
