#include <bits/stdc++.h>

using namespace std;

int main  ()
{
    vector<int>v;
    int j,element,temp;

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
        int index = i;

        for(int j = index;j<element;j++)
        {
            if(v[index]>v[j])
            {
                swap(v[index],v[j]);
            }
        }
    }
    for(int i = 0;i<element;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
