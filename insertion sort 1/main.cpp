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

    for(int i = 1;i<=element;i++)
    {
        temp = v[i];
        j = i-1;

        while(temp<v[j] && j>=0)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = temp;
    }
    for(int i = 0;i<element;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
