#include <bits/stdc++.h>

using namespace std;

struct info{
           string name;
           int date,month,year;

           }person[101];


bool compare(info p1,info p2)
{
    if(p1.year<p2.year)
    {
        return true;
    }
    else if(p2.year<p1.year)
    {
        return false;
    }
    else{
        if(p1.month<p2.month)
        {
            return true;
        }
        else if(p2.month<p1.month)
        {
            return false;
        }
        else{
             return p1.date<=p2.date;
        }
    }
}
int main()
{
    int n;

    while(cin>>n)
    {
        getchar();
        for(int i=0;i<n;i++)
        {
            cin>>person[i].name;
            cin>>person[i].date>>person[i].month>>person[i].year;
        }
        sort(person,person+n,compare);
        cout<<person[n-1].name<<endl<<person[0].name<<endl;
    }

    return 0;
}
