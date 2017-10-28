#include <bits/stdc++.h>

using namespace std;

int product_values[100]; //for storing values of products
int capacity; //capacity of the bag
int dpMatrix[100][100]; //for storing states
int total_products; //total products number
int weightsOfProduct[100]; //for storing weights of products

int calculateMaxValue(int currentIndex,int weight)
{
      int profit1=-100,profit2=-100;
  //   cout<<currentIndex<<endl;
      if(currentIndex==total_products)
      {
          return 0;
      }

      if(dpMatrix[currentIndex][weight]!=-1)return dpMatrix[currentIndex][weight];

      if(weight+weightsOfProduct[currentIndex]<=capacity)
      {
          profit1=product_values[currentIndex]+calculateMaxValue(currentIndex+1,weight+weightsOfProduct[currentIndex]);
      }
      profit2 = calculateMaxValue(currentIndex+1,weight);

      dpMatrix[currentIndex][weight] =max(profit1,profit2);

      return max(profit1,profit2);

}

int main()
{
    memset(dpMatrix,-1,sizeof(dpMatrix));


    cin>>total_products;
    cin>>capacity;
    for(int i=0;i<total_products;i++)
    {
        cin>>product_values[i]>>weightsOfProduct[i];
    }
    int result=calculateMaxValue(0,0);
    cout<<result;
    return 0;
}
