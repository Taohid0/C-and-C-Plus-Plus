#include <bits/stdc++.h>

using namespace std;

int main  ()
{
    vector<int>v;
    int element,temp;

    cout << "enter the number of elements : " << endl;
    cin>>element;

    cout<<"enter the elements : ";

    for(int i = 0;i<element;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }

         for(int i = 0;i<element;i++)
         {
             for(int j= 0;j<element;j++)
             {
                 if(v[j]>v[j+1])
                 {
                     swap(v[j+1],v[j]);
                 }
             }
         }
         for(int i = 0;i<element;i++)
         {
             cout<<v[i]<<" ";
         }
    return 0;
}
