#include <bits/stdc++.h>

using namespace std;

int main()
{
    int result,test,train[100],number_of_train;

    cin>>test;
    while(test--)
    {
     result = 0;
      cin>>number_of_train;
     for(int i = 0;i<number_of_train;i++)
     {
         cin>>train[i];
     }
     for(int i = 0;i<number_of_train;i++)
     {
         for(int j = i+1;j<number_of_train;j++)
         {
             if(train[i]>train[j])
             {
                 result++;
                 swap(train[i],train[j]);
             }

         }
     }
     printf("Optimal train swapping takes %d swaps.\n",result);

    }
    return 0;
}
