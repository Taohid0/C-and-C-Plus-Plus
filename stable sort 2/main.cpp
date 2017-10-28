#include <bits/stdc++.h>

using namespace std;

struct student{
    string name;
    int roll;
    }stdn[100];

bool compare(student a,student b)
{
    return a.roll<b.roll;
}

int main()
{
    int n;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>stdn[i].roll>>stdn[i].name;
    }

    stable_sort(stdn,stdn+n,compare);

   for(auto i:stdn)
   {
       cout<<i.roll<<" "<<i.name<<endl;
   }

    return 0;
}
