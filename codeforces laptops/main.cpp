#include <bits/stdc++.h>

using namespace std;
struct info{;
int price,quality;
}laptops[100005];
bool compare(info i1,info i2)
{
    if(i1.price!=i2.price)return i1.price<i2.price;
        else
        return i1.quality<i2.quality;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>laptops[i].price>>laptops[i].quality;
    }
    sort(laptops,laptops+n,compare);
   // for(int i = 0;i<n;i++)cout<<laptops[i].price << " "<<laptops[i].quality<<endl;
   for(int i = 0;i<n;i++)
    if(laptops[i].price<laptops[i+1].price and laptops[i].quality>laptops[i+1].quality)
        {cout<<"Happy Alex"<<endl;return 0;}


        cout<<"Poor Alex"<<endl;
    return 0;
}
