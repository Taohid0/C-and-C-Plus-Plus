#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    vector<int>v;
    int element;

    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>element;
        v.push_back(element);
    }
  cin>>k;

    for(int i = 0;i<n-k+1;i++)
    {
        int max = -99999;
        for(int j = i;j<i+k;j++)
        {
            if(v[j]>max)
            {
                max= v[j];
            }
        }
        cout<<max<< " ";
    }

    return 0;
}
