#include <bits/stdc++.h>

using namespace std;

int main()
{  vector<int>number[1000];
   vector<int>f;

  int num,n;
    cout <<"How many numbers do you want to enter?" << endl;
    cin>>n;

    cout<<"enter the numbers : ";
    for(int i= 0;i<n;i++)
    {
    cin>>num;
    if((find(f.begin(),f.end(),num)==f.end()))
    {
        f.push_back(num);
    }
    if(num==0 )
    {number[num].push_back(i);
    }

    else
        number[num].push_back(i);
    }
    for(int j = 0;j<(int)f.size();j++)
    {
        int x = f[j];
    cout<<x<<" = ";
    for(int i = 0;i<(int)number[x].size();i++)
    {
        cout<<number[x][i]<<" ";
    }
    cout<<endl;}
    return 0;
}
